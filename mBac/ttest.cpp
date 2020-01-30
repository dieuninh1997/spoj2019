double cuberoot(double x) {
    double y = pow(fabs(x), 1/3);
    return x < 0 ? -y : y;
}

double solveCubic(int a, int b, int c, int d) {
    if (abs(a) < 1e-8) { // Quadratic case, ax^2+bx+c=0
        a = b; b = c; c = d;
        if (abs(a) < 1e-8) { // Linear case, ax+b=0
            a = b; b = c;
            return (double)-b/a;
        }

        ll D = b*b - 4*a*c;
        if (abs(D) < 1e-8)
            return (double)-b/(2*a);
        else if (D > 0)
            return min((-b + sqrt(D))/(2*a), (-b - sqrt(D))/(2*a));
    }

    // Convert to depressed cubic t^3+pt+q = 0 (subst x = t - b/3a)
    ll p = (3*a*c - b*b)/(3*a*a);
    long double  q = (long double)(2*b*b*b - 9*a*b*c + 27*a*a*d)/(27*a*a*a);
    long double x1, x2, x3;
    if (abs(p) < 1e-8) { // p = 0 -> t^3 = -q -> t = -q^1/3
        roots = [cuberoot(-q)];
    } else if (abs(q) < 1e-8) { // q = 0 -> t^3 + pt = 0 -> t(t^2+p)=0
        roots = [0].concat(p < 0 ? [sqrt(-p), -sqrt(-p)] : []);
    } else {
        var D = q*q/4 + p*p*p/27;
        if (abs(D) < 1e-8) {       // D = 0 -> two roots
            roots = [-1.5*q/p, 3*q/p];
        } else if (D > 0) {             // Only one real root
            var u = cuberoot(-q/2 - sqrt(D));
            roots = [u - p/(3*u)];
        } else {                        // D < 0, three roots, but needs to use complex numbers/trigonometric solution
            var u = 2*sqrt(-p/3);
            var t = acos(3*q/p/u)/3;  // D < 0 implies p < 0 and acos argument in [-1..1]
            var k = 2*PI/3;
            roots = [u*cos(t), u*cos(t-k), u*cos(t-2*k)];
        }
    }

    // Convert back from depressed cubic
    for (var i = 0; i < roots.length; i++)
        roots[i] -= b/(3*a);

    return roots;
}
shareimprove this answer

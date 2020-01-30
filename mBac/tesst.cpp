double cubicsolve(double a, double b, double c, double d, double &x1, double &x2, double &x3)
{
    b /= a;
    c /= a;
    d /= a;
    double disc, q, r, dum1, s, t, term1, r13;
    q = (3.0*c - (b*b))/9.0;
    r = -(27.0*d) + b*(9.0*c - 2.0*(b*b));
    r /= 54.0;
    disc = q*q*q + r*r;
    x1 = 0; //The first root is always real.
    term1 = (b/3.0);
     
    // End if (disc > 0)
    // The remaining options are all real
    x3 = x2 = 0;
    if (disc == 0){ // All roots real, at least two are equal.
        r13 = ((r < 0) ? -Math.pow(-r,(1.0/3.0)) : Math.pow(r,(1.0/3.0)));
        x1 = -term1 + 2.0*r13;
        x3 = x2 = -(r13 + term1);
        return;
    } // End if (disc == 0)
    // Only option left is that all roots are real and unequal (to get here, q < 0)
    q = -q;
    dum1 = q*q*q;
    dum1 = Math.acos(r/Math.sqrt(dum1));
    r13 = 2.0*Math.sqrt(q);
    x1 = -term1 + r13*Math.cos(dum1/3.0);
    x2 = -term1 + r13*Math.cos((dum1 + 2.0*Math.PI)/3.0);
    x3 = -term1 + r13*Math.cos((dum1 + 4.0*Math.PI)/3.0);
    return;
}  //End of cubicSolve

#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;

class Vector { 
private: 
    ll x, y, z; 
public: 
    Vector(){}
    Vector(int x, int y, int z) 
    { 
        // Constructor 
        this->x = x; 
        this->y = y; 
        this->z = z; 
    } 
    Vector operator+(Vector v); // ADD 2 Vectors 
    Vector operator-(Vector v); // Subtraction 
    ll operator^(Vector v); // Dot Product 
    Vector operator*(Vector v); // Cross Product 
    double magnitude() { 
      return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)); 
    } 
    friend istream & operator >> (istream &in,  Vector &c); 
}; 
  
// ADD 2 Vectors 
Vector Vector::operator+(Vector v) 
{ 
    ll x1, y1, z1; 
    x1 = x + v.x; 
    y1 = y + v.y; 
    z1 = z + v.z; 
    return Vector(x1, y1, z1); 
} 
  
// Subtract 2 vectors 
Vector Vector::operator-(Vector v) 
{ 
    ll x1, y1, z1; 
    x1 = x - v.x; 
    y1 = y - v.y; 
    z1 = z - v.z; 
    return Vector(x1, y1, z1); 
} 
  
// Dot product of 2 vectors 
ll Vector::operator^(Vector v) 
{ 
    ll x1, y1, z1; 
    x1 = x * v.x; 
    y1 = y * v.y; 
    z1 = z * v.z; 
    return (x1 + y1 + z1); 
} 
  
// Cross product of 2 vectors 
Vector Vector::operator*(Vector v) 
{ 
    ll x1, y1, z1; 
    x1 = y * v.z - z * v.y; 
    y1 = z * v.x - x * v.z; 
    z1 = x * v.y - y * v.x; 
    return Vector(x1, y1, z1); 
} 

istream & operator >> (istream &in,  Vector &c) 
{ 
    in >> c.x; 
    in >> c.y; 
    in >> c.z; 
    return in; 
} 
  
// calculate shortest dist. from point to line 
double shortDistance(Vector line_point1, Vector line_point2, 
                    Vector point) 
{ 
    Vector AB = line_point2 - line_point1; 
    Vector AC = point - line_point1; 
    double area = Vector(AB * AC).magnitude(); 
    double CD = area / AB.magnitude(); 
    return CD; 
} 
  
// Driver program 
void solve() 
{ 
  int t;
  cin>>t;
  while(t--){
    Vector line_point1, line_point2, point; 
    cin>>point;
    cin>>line_point1;
    cin>>line_point2;
    double ans = shortDistance(line_point1, line_point2, point) ;
    printf("%.2lf\n", ans);
    // cout<< setprecision(2) << fixed << <<endl; 
  }
   
} 

int main(){
  solve();
  return 0;
}

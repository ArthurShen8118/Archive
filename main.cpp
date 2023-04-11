#include <iostream>
#include <Eigen/Dense>
 
//using Eigen::MatrixXd;
using namespace Eigen;
using namespace Eigen::internal;
using namespace Eigen::Architecture;
 
using namespace std;
 
int main()
{
Eigen::Quaternionf q = Eigen::Quaternionf(0.6428, 0, 0.7660, 0.000 );
// Note eigen quaternion format is [w x y z]
Eigen::Matrix3f m(q);
// Eigen::Matrix3f dd =m.inverse();
Eigen::Matrix3f dd ;
dd << 0.7071,0,0.7071,0,1,0,-0.7071,0,0.7071;
Eigen::Quaternionf q2(dd);
// Eigen::Matrix3f cc =m.inverse()*m;
Eigen::Matrix3f cc =dd*m;
Eigen::Quaternionf q1(cc);

std::cout << "R:\n" << m << "\n";
std::cout << "============================"  << "\n";
std::cout << "R:\n" << dd << "\n";
std::cout << "============================"  << "\n";
std::cout << "R:\n" << cc << "\n";
std::cout << "============================"  << "\n";
std::cout << "1x" << q1.coeffs()[0] << "\n";
std::cout << "1y" << q1.coeffs()[1] << "\n";
std::cout << "1z" << q1.coeffs()[2] << "\n";
std::cout << "1w" << q1.coeffs()[3] << "\n";
std::cout << "============================"  << "\n";
Eigen::Quaternionf q3=q2*q;


std::cout << "x" << q3.coeffs()[0] << "\n";
std::cout << "y" << q3.coeffs()[1] << "\n";
std::cout << "z" << q3.coeffs()[2] << "\n";
std::cout << "w" << q3.coeffs()[3] << "\n";




}


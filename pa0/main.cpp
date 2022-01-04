#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>

int main(){

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << std::acos(-1) << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a/b << std::endl;
    // std::cout << std::sqrt(b) << std::endl;
    // std::cout << std::acos(-1) << std::endl;
    // std::cout << std::sin(30.0/180.0*acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f,2.0f,3.0f);
    Eigen::Vector3f w(1.0f,0.0f,0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i,j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
    // matrix scalar multiply i * 2.0
    // matrix multiply i * j
    // matrix multiply vector i * v

    Eigen::Vector3f vp(2.0f,1.0f,1.0f), result;
    float angle = (45.0/180.0) * acos(-1);
    float tx = 1.0;
    float ty = 2.0;

    Eigen::Matrix3f Rotation, Translation, Transformation;
    Rotation << cos(angle), -sin(angle), 0, sin(angle), cos(angle), 0, 0, 0, 1.0;
    Translation << 1.0, 0, tx, 0, 1.0, ty, 0, 0, 1.0;
    Transformation = Translation * Rotation;
    std::cout << "Final transformation \n";
    std::cout << Transformation << std::endl;
    result = Transformation * vp;
    std::cout << "Final result vector \n";
    std::cout << result << std::endl;
    return 0;
}

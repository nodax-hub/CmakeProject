#include <iostream>
#include <opencv2/opencv.hpp>
#include <Eigen/Dense>

int main() {

    cv::Mat image = cv::imread("../rangePortrait0.bmp");
    if (image.empty()) {
        std::cout << "Image load failed!" << std::endl;
        return -1;
    }
    cv::imshow("Image", image);
    cv::waitKey(0);

    Eigen::Matrix2d mat;
    mat << 1, 2,
           3, 4;

    Eigen::Vector2d vec(5, 6);
    Eigen::Vector2d result = mat * vec;

    std::cout << "Результат: " << result.transpose() << std::endl;
    return 0;
}

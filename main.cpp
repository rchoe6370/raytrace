#include <iostream>

int main() {
    const int imageWidth = 256;
    const int imageHeight = 256;

    std::cout << "P3\n" << imageWidth << " " << imageHeight << "\n255\n";

    for (int i = 0; i < imageHeight; i++) {
        for (int j = 0; j < imageWidth; j++) {
            double r = static_cast<double>(j) / (imageWidth - 1);
            double g = static_cast<double>(i) / (imageHeight - 1);
            double b = 0.0;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
    
}

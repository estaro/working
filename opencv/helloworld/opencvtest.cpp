#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char* argv[]) {
   std::cout << "start -- \n";

   cv::Mat image = cv::imread("data/w001.jpg" , 0);
   if (image.empty()) {
      std::cout << "file not read.";
      return -1;
   }



   std::cout << image.rows ;


   std::cout << "\nend -- \n";
   return 0;
}


//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.imgproc;

import java.util.ArrayList;
import java.util.List;
import org.opencv.core.Mat;
import org.opencv.core.MatOfFloat;
import org.opencv.core.MatOfInt;
import org.opencv.core.MatOfInt4;
import org.opencv.core.MatOfPoint;
import org.opencv.core.MatOfPoint2f;
import org.opencv.core.Point;
import org.opencv.core.Rect;
import org.opencv.core.RotatedRect;
import org.opencv.core.Scalar;
import org.opencv.core.Size;
import org.opencv.core.TermCriteria;
import org.opencv.utils.Converters;

public class Imgproc {

    private static final int
            IPL_BORDER_CONSTANT = 0,
            IPL_BORDER_REPLICATE = 1,
            IPL_BORDER_REFLECT = 2,
            IPL_BORDER_WRAP = 3,
            IPL_BORDER_REFLECT_101 = 4,
            IPL_BORDER_TRANSPARENT = 5,
            CV_INTER_NN = 0,
            CV_INTER_LINEAR = 1,
            CV_INTER_CUBIC = 2,
            CV_INTER_AREA = 3,
            CV_INTER_LANCZOS4 = 4,
            CV_MOP_ERODE = 0,
            CV_MOP_DILATE = 1,
            CV_MOP_OPEN = 2,
            CV_MOP_CLOSE = 3,
            CV_MOP_GRADIENT = 4,
            CV_MOP_TOPHAT = 5,
            CV_MOP_BLACKHAT = 6,
            CV_RETR_EXTERNAL = 0,
            CV_RETR_LIST = 1,
            CV_RETR_CCOMP = 2,
            CV_RETR_TREE = 3,
            CV_RETR_FLOODFILL = 4,
            CV_CHAIN_APPROX_NONE = 1,
            CV_CHAIN_APPROX_SIMPLE = 2,
            CV_CHAIN_APPROX_TC89_L1 = 3,
            CV_CHAIN_APPROX_TC89_KCOS = 4,
            CV_THRESH_BINARY = 0,
            CV_THRESH_BINARY_INV = 1,
            CV_THRESH_TRUNC = 2,
            CV_THRESH_TOZERO = 3,
            CV_THRESH_TOZERO_INV = 4,
            CV_THRESH_MASK = 7,
            CV_THRESH_OTSU = 8;


    public static final int
            CV_BLUR_NO_SCALE = 0,
            CV_BLUR = 1,
            CV_GAUSSIAN = 2,
            CV_MEDIAN = 3,
            CV_BILATERAL = 4,
            CV_GAUSSIAN_5x5 = 7,
            CV_SCHARR = -1,
            CV_MAX_SOBEL_KSIZE = 7,
            CV_RGBA2mRGBA = 125,
            CV_mRGBA2RGBA = 126,
            CV_WARP_FILL_OUTLIERS = 8,
            CV_WARP_INVERSE_MAP = 16,
            CV_SHAPE_RECT = 0,
            CV_SHAPE_CROSS = 1,
            CV_SHAPE_ELLIPSE = 2,
            CV_SHAPE_CUSTOM = 100,
            CV_CHAIN_CODE = 0,
            CV_LINK_RUNS = 5,
            CV_POLY_APPROX_DP = 0,
            CV_CONTOURS_MATCH_I1 = 1,
            CV_CONTOURS_MATCH_I2 = 2,
            CV_CONTOURS_MATCH_I3 = 3,
            CV_CLOCKWISE = 1,
            CV_COUNTER_CLOCKWISE = 2,
            CV_COMP_CORREL = 0,
            CV_COMP_CHISQR = 1,
            CV_COMP_INTERSECT = 2,
            CV_COMP_BHATTACHARYYA = 3,
            CV_COMP_HELLINGER = CV_COMP_BHATTACHARYYA,
            CV_DIST_MASK_3 = 3,
            CV_DIST_MASK_5 = 5,
            CV_DIST_MASK_PRECISE = 0,
            CV_DIST_LABEL_CCOMP = 0,
            CV_DIST_LABEL_PIXEL = 1,
            CV_DIST_USER = -1,
            CV_DIST_L1 = 1,
            CV_DIST_L2 = 2,
            CV_DIST_C = 3,
            CV_DIST_L12 = 4,
            CV_DIST_FAIR = 5,
            CV_DIST_WELSCH = 6,
            CV_DIST_HUBER = 7,
            CV_CANNY_L2_GRADIENT = (1 << 31),
            CV_HOUGH_STANDARD = 0,
            CV_HOUGH_PROBABILISTIC = 1,
            CV_HOUGH_MULTI_SCALE = 2,
            CV_HOUGH_GRADIENT = 3,
            BORDER_REPLICATE = IPL_BORDER_REPLICATE,
            BORDER_CONSTANT = IPL_BORDER_CONSTANT,
            BORDER_REFLECT = IPL_BORDER_REFLECT,
            BORDER_WRAP = IPL_BORDER_WRAP,
            BORDER_REFLECT_101 = IPL_BORDER_REFLECT_101,
            BORDER_REFLECT101 = BORDER_REFLECT_101,
            BORDER_TRANSPARENT = IPL_BORDER_TRANSPARENT,
            BORDER_DEFAULT = BORDER_REFLECT_101,
            BORDER_ISOLATED = 16,
            KERNEL_GENERAL = 0,
            KERNEL_SYMMETRICAL = 1,
            KERNEL_ASYMMETRICAL = 2,
            KERNEL_SMOOTH = 4,
            KERNEL_INTEGER = 8,
            MORPH_ERODE = CV_MOP_ERODE,
            MORPH_DILATE = CV_MOP_DILATE,
            MORPH_OPEN = CV_MOP_OPEN,
            MORPH_CLOSE = CV_MOP_CLOSE,
            MORPH_GRADIENT = CV_MOP_GRADIENT,
            MORPH_TOPHAT = CV_MOP_TOPHAT,
            MORPH_BLACKHAT = CV_MOP_BLACKHAT,
            MORPH_RECT = 0,
            MORPH_CROSS = 1,
            MORPH_ELLIPSE = 2,
            GHT_POSITION = 0,
            GHT_SCALE = 1,
            GHT_ROTATION = 2,
            INTER_NEAREST = CV_INTER_NN,
            INTER_LINEAR = CV_INTER_LINEAR,
            INTER_CUBIC = CV_INTER_CUBIC,
            INTER_AREA = CV_INTER_AREA,
            INTER_LANCZOS4 = CV_INTER_LANCZOS4,
            INTER_MAX = 7,
            WARP_INVERSE_MAP = CV_WARP_INVERSE_MAP,
            INTER_BITS = 5,
            INTER_BITS2 = INTER_BITS*2,
            INTER_TAB_SIZE = (1<<INTER_BITS),
            INTER_TAB_SIZE2 = INTER_TAB_SIZE*INTER_TAB_SIZE,
            THRESH_BINARY = CV_THRESH_BINARY,
            THRESH_BINARY_INV = CV_THRESH_BINARY_INV,
            THRESH_TRUNC = CV_THRESH_TRUNC,
            THRESH_TOZERO = CV_THRESH_TOZERO,
            THRESH_TOZERO_INV = CV_THRESH_TOZERO_INV,
            THRESH_MASK = CV_THRESH_MASK,
            THRESH_OTSU = CV_THRESH_OTSU,
            ADAPTIVE_THRESH_MEAN_C = 0,
            ADAPTIVE_THRESH_GAUSSIAN_C = 1,
            PROJ_SPHERICAL_ORTHO = 0,
            PROJ_SPHERICAL_EQRECT = 1,
            GC_BGD = 0,
            GC_FGD = 1,
            GC_PR_BGD = 2,
            GC_PR_FGD = 3,
            GC_INIT_WITH_RECT = 0,
            GC_INIT_WITH_MASK = 1,
            GC_EVAL = 2,
            DIST_LABEL_CCOMP = 0,
            DIST_LABEL_PIXEL = 1,
            FLOODFILL_FIXED_RANGE = 1 << 16,
            FLOODFILL_MASK_ONLY = 1 << 17,
            COLOR_BGR2BGRA = 0,
            COLOR_RGB2RGBA = COLOR_BGR2BGRA,
            COLOR_BGRA2BGR = 1,
            COLOR_RGBA2RGB = COLOR_BGRA2BGR,
            COLOR_BGR2RGBA = 2,
            COLOR_RGB2BGRA = COLOR_BGR2RGBA,
            COLOR_RGBA2BGR = 3,
            COLOR_BGRA2RGB = COLOR_RGBA2BGR,
            COLOR_BGR2RGB = 4,
            COLOR_RGB2BGR = COLOR_BGR2RGB,
            COLOR_BGRA2RGBA = 5,
            COLOR_RGBA2BGRA = COLOR_BGRA2RGBA,
            COLOR_BGR2GRAY = 6,
            COLOR_RGB2GRAY = 7,
            COLOR_GRAY2BGR = 8,
            COLOR_GRAY2RGB = COLOR_GRAY2BGR,
            COLOR_GRAY2BGRA = 9,
            COLOR_GRAY2RGBA = COLOR_GRAY2BGRA,
            COLOR_BGRA2GRAY = 10,
            COLOR_RGBA2GRAY = 11,
            COLOR_BGR2BGR565 = 12,
            COLOR_RGB2BGR565 = 13,
            COLOR_BGR5652BGR = 14,
            COLOR_BGR5652RGB = 15,
            COLOR_BGRA2BGR565 = 16,
            COLOR_RGBA2BGR565 = 17,
            COLOR_BGR5652BGRA = 18,
            COLOR_BGR5652RGBA = 19,
            COLOR_GRAY2BGR565 = 20,
            COLOR_BGR5652GRAY = 21,
            COLOR_BGR2BGR555 = 22,
            COLOR_RGB2BGR555 = 23,
            COLOR_BGR5552BGR = 24,
            COLOR_BGR5552RGB = 25,
            COLOR_BGRA2BGR555 = 26,
            COLOR_RGBA2BGR555 = 27,
            COLOR_BGR5552BGRA = 28,
            COLOR_BGR5552RGBA = 29,
            COLOR_GRAY2BGR555 = 30,
            COLOR_BGR5552GRAY = 31,
            COLOR_BGR2XYZ = 32,
            COLOR_RGB2XYZ = 33,
            COLOR_XYZ2BGR = 34,
            COLOR_XYZ2RGB = 35,
            COLOR_BGR2YCrCb = 36,
            COLOR_RGB2YCrCb = 37,
            COLOR_YCrCb2BGR = 38,
            COLOR_YCrCb2RGB = 39,
            COLOR_BGR2HSV = 40,
            COLOR_RGB2HSV = 41,
            COLOR_BGR2Lab = 44,
            COLOR_RGB2Lab = 45,
            COLOR_BayerBG2BGR = 46,
            COLOR_BayerGB2BGR = 47,
            COLOR_BayerRG2BGR = 48,
            COLOR_BayerGR2BGR = 49,
            COLOR_BayerBG2RGB = COLOR_BayerRG2BGR,
            COLOR_BayerGB2RGB = COLOR_BayerGR2BGR,
            COLOR_BayerRG2RGB = COLOR_BayerBG2BGR,
            COLOR_BayerGR2RGB = COLOR_BayerGB2BGR,
            COLOR_BGR2Luv = 50,
            COLOR_RGB2Luv = 51,
            COLOR_BGR2HLS = 52,
            COLOR_RGB2HLS = 53,
            COLOR_HSV2BGR = 54,
            COLOR_HSV2RGB = 55,
            COLOR_Lab2BGR = 56,
            COLOR_Lab2RGB = 57,
            COLOR_Luv2BGR = 58,
            COLOR_Luv2RGB = 59,
            COLOR_HLS2BGR = 60,
            COLOR_HLS2RGB = 61,
            COLOR_BayerBG2BGR_VNG = 62,
            COLOR_BayerGB2BGR_VNG = 63,
            COLOR_BayerRG2BGR_VNG = 64,
            COLOR_BayerGR2BGR_VNG = 65,
            COLOR_BayerBG2RGB_VNG = COLOR_BayerRG2BGR_VNG,
            COLOR_BayerGB2RGB_VNG = COLOR_BayerGR2BGR_VNG,
            COLOR_BayerRG2RGB_VNG = COLOR_BayerBG2BGR_VNG,
            COLOR_BayerGR2RGB_VNG = COLOR_BayerGB2BGR_VNG,
            COLOR_BGR2HSV_FULL = 66,
            COLOR_RGB2HSV_FULL = 67,
            COLOR_BGR2HLS_FULL = 68,
            COLOR_RGB2HLS_FULL = 69,
            COLOR_HSV2BGR_FULL = 70,
            COLOR_HSV2RGB_FULL = 71,
            COLOR_HLS2BGR_FULL = 72,
            COLOR_HLS2RGB_FULL = 73,
            COLOR_LBGR2Lab = 74,
            COLOR_LRGB2Lab = 75,
            COLOR_LBGR2Luv = 76,
            COLOR_LRGB2Luv = 77,
            COLOR_Lab2LBGR = 78,
            COLOR_Lab2LRGB = 79,
            COLOR_Luv2LBGR = 80,
            COLOR_Luv2LRGB = 81,
            COLOR_BGR2YUV = 82,
            COLOR_RGB2YUV = 83,
            COLOR_YUV2BGR = 84,
            COLOR_YUV2RGB = 85,
            COLOR_BayerBG2GRAY = 86,
            COLOR_BayerGB2GRAY = 87,
            COLOR_BayerRG2GRAY = 88,
            COLOR_BayerGR2GRAY = 89,
            COLOR_YUV2RGB_NV12 = 90,
            COLOR_YUV2BGR_NV12 = 91,
            COLOR_YUV2RGB_NV21 = 92,
            COLOR_YUV2BGR_NV21 = 93,
            COLOR_YUV420sp2RGB = COLOR_YUV2RGB_NV21,
            COLOR_YUV420sp2BGR = COLOR_YUV2BGR_NV21,
            COLOR_YUV2RGBA_NV12 = 94,
            COLOR_YUV2BGRA_NV12 = 95,
            COLOR_YUV2RGBA_NV21 = 96,
            COLOR_YUV2BGRA_NV21 = 97,
            COLOR_YUV420sp2RGBA = COLOR_YUV2RGBA_NV21,
            COLOR_YUV420sp2BGRA = COLOR_YUV2BGRA_NV21,
            COLOR_YUV2RGB_YV12 = 98,
            COLOR_YUV2BGR_YV12 = 99,
            COLOR_YUV2RGB_IYUV = 100,
            COLOR_YUV2BGR_IYUV = 101,
            COLOR_YUV2RGB_I420 = COLOR_YUV2RGB_IYUV,
            COLOR_YUV2BGR_I420 = COLOR_YUV2BGR_IYUV,
            COLOR_YUV420p2RGB = COLOR_YUV2RGB_YV12,
            COLOR_YUV420p2BGR = COLOR_YUV2BGR_YV12,
            COLOR_YUV2RGBA_YV12 = 102,
            COLOR_YUV2BGRA_YV12 = 103,
            COLOR_YUV2RGBA_IYUV = 104,
            COLOR_YUV2BGRA_IYUV = 105,
            COLOR_YUV2RGBA_I420 = COLOR_YUV2RGBA_IYUV,
            COLOR_YUV2BGRA_I420 = COLOR_YUV2BGRA_IYUV,
            COLOR_YUV420p2RGBA = COLOR_YUV2RGBA_YV12,
            COLOR_YUV420p2BGRA = COLOR_YUV2BGRA_YV12,
            COLOR_YUV2GRAY_420 = 106,
            COLOR_YUV2GRAY_NV21 = COLOR_YUV2GRAY_420,
            COLOR_YUV2GRAY_NV12 = COLOR_YUV2GRAY_420,
            COLOR_YUV2GRAY_YV12 = COLOR_YUV2GRAY_420,
            COLOR_YUV2GRAY_IYUV = COLOR_YUV2GRAY_420,
            COLOR_YUV2GRAY_I420 = COLOR_YUV2GRAY_420,
            COLOR_YUV420sp2GRAY = COLOR_YUV2GRAY_420,
            COLOR_YUV420p2GRAY = COLOR_YUV2GRAY_420,
            COLOR_YUV2RGB_UYVY = 107,
            COLOR_YUV2BGR_UYVY = 108,
            COLOR_YUV2RGB_Y422 = COLOR_YUV2RGB_UYVY,
            COLOR_YUV2BGR_Y422 = COLOR_YUV2BGR_UYVY,
            COLOR_YUV2RGB_UYNV = COLOR_YUV2RGB_UYVY,
            COLOR_YUV2BGR_UYNV = COLOR_YUV2BGR_UYVY,
            COLOR_YUV2RGBA_UYVY = 111,
            COLOR_YUV2BGRA_UYVY = 112,
            COLOR_YUV2RGBA_Y422 = COLOR_YUV2RGBA_UYVY,
            COLOR_YUV2BGRA_Y422 = COLOR_YUV2BGRA_UYVY,
            COLOR_YUV2RGBA_UYNV = COLOR_YUV2RGBA_UYVY,
            COLOR_YUV2BGRA_UYNV = COLOR_YUV2BGRA_UYVY,
            COLOR_YUV2RGB_YUY2 = 115,
            COLOR_YUV2BGR_YUY2 = 116,
            COLOR_YUV2RGB_YVYU = 117,
            COLOR_YUV2BGR_YVYU = 118,
            COLOR_YUV2RGB_YUYV = COLOR_YUV2RGB_YUY2,
            COLOR_YUV2BGR_YUYV = COLOR_YUV2BGR_YUY2,
            COLOR_YUV2RGB_YUNV = COLOR_YUV2RGB_YUY2,
            COLOR_YUV2BGR_YUNV = COLOR_YUV2BGR_YUY2,
            COLOR_YUV2RGBA_YUY2 = 119,
            COLOR_YUV2BGRA_YUY2 = 120,
            COLOR_YUV2RGBA_YVYU = 121,
            COLOR_YUV2BGRA_YVYU = 122,
            COLOR_YUV2RGBA_YUYV = COLOR_YUV2RGBA_YUY2,
            COLOR_YUV2BGRA_YUYV = COLOR_YUV2BGRA_YUY2,
            COLOR_YUV2RGBA_YUNV = COLOR_YUV2RGBA_YUY2,
            COLOR_YUV2BGRA_YUNV = COLOR_YUV2BGRA_YUY2,
            COLOR_YUV2GRAY_UYVY = 123,
            COLOR_YUV2GRAY_YUY2 = 124,
            COLOR_YUV2GRAY_Y422 = COLOR_YUV2GRAY_UYVY,
            COLOR_YUV2GRAY_UYNV = COLOR_YUV2GRAY_UYVY,
            COLOR_YUV2GRAY_YVYU = COLOR_YUV2GRAY_YUY2,
            COLOR_YUV2GRAY_YUYV = COLOR_YUV2GRAY_YUY2,
            COLOR_YUV2GRAY_YUNV = COLOR_YUV2GRAY_YUY2,
            COLOR_RGBA2mRGBA = 125,
            COLOR_mRGBA2RGBA = 126,
            COLOR_RGB2YUV_I420 = 127,
            COLOR_BGR2YUV_I420 = 128,
            COLOR_RGB2YUV_IYUV = COLOR_RGB2YUV_I420,
            COLOR_BGR2YUV_IYUV = COLOR_BGR2YUV_I420,
            COLOR_RGBA2YUV_I420 = 129,
            COLOR_BGRA2YUV_I420 = 130,
            COLOR_RGBA2YUV_IYUV = COLOR_RGBA2YUV_I420,
            COLOR_BGRA2YUV_IYUV = COLOR_BGRA2YUV_I420,
            COLOR_RGB2YUV_YV12 = 131,
            COLOR_BGR2YUV_YV12 = 132,
            COLOR_RGBA2YUV_YV12 = 133,
            COLOR_BGRA2YUV_YV12 = 134,
            COLOR_COLORCVT_MAX = 135,
            TM_SQDIFF = 0,
            TM_SQDIFF_NORMED = 1,
            TM_CCORR = 2,
            TM_CCORR_NORMED = 3,
            TM_CCOEFF = 4,
            TM_CCOEFF_NORMED = 5,
            RETR_EXTERNAL = CV_RETR_EXTERNAL,
            RETR_LIST = CV_RETR_LIST,
            RETR_CCOMP = CV_RETR_CCOMP,
            RETR_TREE = CV_RETR_TREE,
            RETR_FLOODFILL = CV_RETR_FLOODFILL,
            CHAIN_APPROX_NONE = CV_CHAIN_APPROX_NONE,
            CHAIN_APPROX_SIMPLE = CV_CHAIN_APPROX_SIMPLE,
            CHAIN_APPROX_TC89_L1 = CV_CHAIN_APPROX_TC89_L1,
            CHAIN_APPROX_TC89_KCOS = CV_CHAIN_APPROX_TC89_KCOS;


    //
    // C++:  void Canny(Mat image, Mat& edges, double threshold1, double threshold2, int apertureSize = 3, bool L2gradient = false)
    //

    //javadoc: Canny(image, edges, threshold1, threshold2, apertureSize, L2gradient)
    public static void Canny(Mat image, Mat edges, double threshold1, double threshold2, int apertureSize, boolean L2gradient)
    {
        
        Canny_0(image.nativeObj, edges.nativeObj, threshold1, threshold2, apertureSize, L2gradient);
        
        return;
    }

    //javadoc: Canny(image, edges, threshold1, threshold2)
    public static void Canny(Mat image, Mat edges, double threshold1, double threshold2)
    {
        
        Canny_1(image.nativeObj, edges.nativeObj, threshold1, threshold2);
        
        return;
    }


    //
    // C++:  void GaussianBlur(Mat src, Mat& dst, Size ksize, double sigmaX, double sigmaY = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: GaussianBlur(src, dst, ksize, sigmaX, sigmaY, borderType)
    public static void GaussianBlur(Mat src, Mat dst, Size ksize, double sigmaX, double sigmaY, int borderType)
    {
        
        GaussianBlur_0(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaX, sigmaY, borderType);
        
        return;
    }

    //javadoc: GaussianBlur(src, dst, ksize, sigmaX, sigmaY)
    public static void GaussianBlur(Mat src, Mat dst, Size ksize, double sigmaX, double sigmaY)
    {
        
        GaussianBlur_1(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaX, sigmaY);
        
        return;
    }

    //javadoc: GaussianBlur(src, dst, ksize, sigmaX)
    public static void GaussianBlur(Mat src, Mat dst, Size ksize, double sigmaX)
    {
        
        GaussianBlur_2(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaX);
        
        return;
    }


    //
    // C++:  void HoughCircles(Mat image, Mat& circles, int method, double dp, double minDist, double param1 = 100, double param2 = 100, int minRadius = 0, int maxRadius = 0)
    //

    //javadoc: HoughCircles(image, circles, method, dp, minDist, param1, param2, minRadius, maxRadius)
    public static void HoughCircles(Mat image, Mat circles, int method, double dp, double minDist, double param1, double param2, int minRadius, int maxRadius)
    {
        
        HoughCircles_0(image.nativeObj, circles.nativeObj, method, dp, minDist, param1, param2, minRadius, maxRadius);
        
        return;
    }

    //javadoc: HoughCircles(image, circles, method, dp, minDist)
    public static void HoughCircles(Mat image, Mat circles, int method, double dp, double minDist)
    {
        
        HoughCircles_1(image.nativeObj, circles.nativeObj, method, dp, minDist);
        
        return;
    }


    //
    // C++:  void HoughLines(Mat image, Mat& lines, double rho, double theta, int threshold, double srn = 0, double stn = 0)
    //

    //javadoc: HoughLines(image, lines, rho, theta, threshold, srn, stn)
    public static void HoughLines(Mat image, Mat lines, double rho, double theta, int threshold, double srn, double stn)
    {
        
        HoughLines_0(image.nativeObj, lines.nativeObj, rho, theta, threshold, srn, stn);
        
        return;
    }

    //javadoc: HoughLines(image, lines, rho, theta, threshold)
    public static void HoughLines(Mat image, Mat lines, double rho, double theta, int threshold)
    {
        
        HoughLines_1(image.nativeObj, lines.nativeObj, rho, theta, threshold);
        
        return;
    }


    //
    // C++:  void HoughLinesP(Mat image, Mat& lines, double rho, double theta, int threshold, double minLineLength = 0, double maxLineGap = 0)
    //

    //javadoc: HoughLinesP(image, lines, rho, theta, threshold, minLineLength, maxLineGap)
    public static void HoughLinesP(Mat image, Mat lines, double rho, double theta, int threshold, double minLineLength, double maxLineGap)
    {
        
        HoughLinesP_0(image.nativeObj, lines.nativeObj, rho, theta, threshold, minLineLength, maxLineGap);
        
        return;
    }

    //javadoc: HoughLinesP(image, lines, rho, theta, threshold)
    public static void HoughLinesP(Mat image, Mat lines, double rho, double theta, int threshold)
    {
        
        HoughLinesP_1(image.nativeObj, lines.nativeObj, rho, theta, threshold);
        
        return;
    }


    //
    // C++:  void HuMoments(Moments m, Mat& hu)
    //

    //javadoc: HuMoments(m, hu)
    public static void HuMoments(Moments m, Mat hu)
    {
        
        HuMoments_0(m.nativeObj, hu.nativeObj);
        
        return;
    }


    //
    // C++:  void Laplacian(Mat src, Mat& dst, int ddepth, int ksize = 1, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: Laplacian(src, dst, ddepth, ksize, scale, delta, borderType)
    public static void Laplacian(Mat src, Mat dst, int ddepth, int ksize, double scale, double delta, int borderType)
    {
        
        Laplacian_0(src.nativeObj, dst.nativeObj, ddepth, ksize, scale, delta, borderType);
        
        return;
    }

    //javadoc: Laplacian(src, dst, ddepth, ksize, scale, delta)
    public static void Laplacian(Mat src, Mat dst, int ddepth, int ksize, double scale, double delta)
    {
        
        Laplacian_1(src.nativeObj, dst.nativeObj, ddepth, ksize, scale, delta);
        
        return;
    }

    //javadoc: Laplacian(src, dst, ddepth)
    public static void Laplacian(Mat src, Mat dst, int ddepth)
    {
        
        Laplacian_2(src.nativeObj, dst.nativeObj, ddepth);
        
        return;
    }


    //
    // C++:  double PSNR(Mat src1, Mat src2)
    //

    //javadoc: PSNR(src1, src2)
    public static double PSNR(Mat src1, Mat src2)
    {
        
        double retVal = PSNR_0(src1.nativeObj, src2.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void Scharr(Mat src, Mat& dst, int ddepth, int dx, int dy, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: Scharr(src, dst, ddepth, dx, dy, scale, delta, borderType)
    public static void Scharr(Mat src, Mat dst, int ddepth, int dx, int dy, double scale, double delta, int borderType)
    {
        
        Scharr_0(src.nativeObj, dst.nativeObj, ddepth, dx, dy, scale, delta, borderType);
        
        return;
    }

    //javadoc: Scharr(src, dst, ddepth, dx, dy, scale, delta)
    public static void Scharr(Mat src, Mat dst, int ddepth, int dx, int dy, double scale, double delta)
    {
        
        Scharr_1(src.nativeObj, dst.nativeObj, ddepth, dx, dy, scale, delta);
        
        return;
    }

    //javadoc: Scharr(src, dst, ddepth, dx, dy)
    public static void Scharr(Mat src, Mat dst, int ddepth, int dx, int dy)
    {
        
        Scharr_2(src.nativeObj, dst.nativeObj, ddepth, dx, dy);
        
        return;
    }


    //
    // C++:  void Sobel(Mat src, Mat& dst, int ddepth, int dx, int dy, int ksize = 3, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: Sobel(src, dst, ddepth, dx, dy, ksize, scale, delta, borderType)
    public static void Sobel(Mat src, Mat dst, int ddepth, int dx, int dy, int ksize, double scale, double delta, int borderType)
    {
        
        Sobel_0(src.nativeObj, dst.nativeObj, ddepth, dx, dy, ksize, scale, delta, borderType);
        
        return;
    }

    //javadoc: Sobel(src, dst, ddepth, dx, dy, ksize, scale, delta)
    public static void Sobel(Mat src, Mat dst, int ddepth, int dx, int dy, int ksize, double scale, double delta)
    {
        
        Sobel_1(src.nativeObj, dst.nativeObj, ddepth, dx, dy, ksize, scale, delta);
        
        return;
    }

    //javadoc: Sobel(src, dst, ddepth, dx, dy)
    public static void Sobel(Mat src, Mat dst, int ddepth, int dx, int dy)
    {
        
        Sobel_2(src.nativeObj, dst.nativeObj, ddepth, dx, dy);
        
        return;
    }


    //
    // C++:  void accumulate(Mat src, Mat& dst, Mat mask = Mat())
    //

    //javadoc: accumulate(src, dst, mask)
    public static void accumulate(Mat src, Mat dst, Mat mask)
    {
        
        accumulate_0(src.nativeObj, dst.nativeObj, mask.nativeObj);
        
        return;
    }

    //javadoc: accumulate(src, dst)
    public static void accumulate(Mat src, Mat dst)
    {
        
        accumulate_1(src.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void accumulateProduct(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
    //

    //javadoc: accumulateProduct(src1, src2, dst, mask)
    public static void accumulateProduct(Mat src1, Mat src2, Mat dst, Mat mask)
    {
        
        accumulateProduct_0(src1.nativeObj, src2.nativeObj, dst.nativeObj, mask.nativeObj);
        
        return;
    }

    //javadoc: accumulateProduct(src1, src2, dst)
    public static void accumulateProduct(Mat src1, Mat src2, Mat dst)
    {
        
        accumulateProduct_1(src1.nativeObj, src2.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void accumulateSquare(Mat src, Mat& dst, Mat mask = Mat())
    //

    //javadoc: accumulateSquare(src, dst, mask)
    public static void accumulateSquare(Mat src, Mat dst, Mat mask)
    {
        
        accumulateSquare_0(src.nativeObj, dst.nativeObj, mask.nativeObj);
        
        return;
    }

    //javadoc: accumulateSquare(src, dst)
    public static void accumulateSquare(Mat src, Mat dst)
    {
        
        accumulateSquare_1(src.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void accumulateWeighted(Mat src, Mat& dst, double alpha, Mat mask = Mat())
    //

    //javadoc: accumulateWeighted(src, dst, alpha, mask)
    public static void accumulateWeighted(Mat src, Mat dst, double alpha, Mat mask)
    {
        
        accumulateWeighted_0(src.nativeObj, dst.nativeObj, alpha, mask.nativeObj);
        
        return;
    }

    //javadoc: accumulateWeighted(src, dst, alpha)
    public static void accumulateWeighted(Mat src, Mat dst, double alpha)
    {
        
        accumulateWeighted_1(src.nativeObj, dst.nativeObj, alpha);
        
        return;
    }


    //
    // C++:  void adaptiveBilateralFilter(Mat src, Mat& dst, Size ksize, double sigmaSpace, double maxSigmaColor = 20.0, Point anchor = Point(-1, -1), int borderType = BORDER_DEFAULT)
    //

    //javadoc: adaptiveBilateralFilter(src, dst, ksize, sigmaSpace, maxSigmaColor, anchor, borderType)
    public static void adaptiveBilateralFilter(Mat src, Mat dst, Size ksize, double sigmaSpace, double maxSigmaColor, Point anchor, int borderType)
    {
        
        adaptiveBilateralFilter_0(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaSpace, maxSigmaColor, anchor.x, anchor.y, borderType);
        
        return;
    }

    //javadoc: adaptiveBilateralFilter(src, dst, ksize, sigmaSpace, maxSigmaColor, anchor)
    public static void adaptiveBilateralFilter(Mat src, Mat dst, Size ksize, double sigmaSpace, double maxSigmaColor, Point anchor)
    {
        
        adaptiveBilateralFilter_1(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaSpace, maxSigmaColor, anchor.x, anchor.y);
        
        return;
    }

    //javadoc: adaptiveBilateralFilter(src, dst, ksize, sigmaSpace)
    public static void adaptiveBilateralFilter(Mat src, Mat dst, Size ksize, double sigmaSpace)
    {
        
        adaptiveBilateralFilter_2(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, sigmaSpace);
        
        return;
    }


    //
    // C++:  void adaptiveThreshold(Mat src, Mat& dst, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C)
    //

    //javadoc: adaptiveThreshold(src, dst, maxValue, adaptiveMethod, thresholdType, blockSize, C)
    public static void adaptiveThreshold(Mat src, Mat dst, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C)
    {
        
        adaptiveThreshold_0(src.nativeObj, dst.nativeObj, maxValue, adaptiveMethod, thresholdType, blockSize, C);
        
        return;
    }


    //
    // C++:  void approxPolyDP(vector_Point2f curve, vector_Point2f& approxCurve, double epsilon, bool closed)
    //

    //javadoc: approxPolyDP(curve, approxCurve, epsilon, closed)
    public static void approxPolyDP(MatOfPoint2f curve, MatOfPoint2f approxCurve, double epsilon, boolean closed)
    {
        Mat curve_mat = curve;
        Mat approxCurve_mat = approxCurve;
        approxPolyDP_0(curve_mat.nativeObj, approxCurve_mat.nativeObj, epsilon, closed);
        
        return;
    }


    //
    // C++:  double arcLength(vector_Point2f curve, bool closed)
    //

    //javadoc: arcLength(curve, closed)
    public static double arcLength(MatOfPoint2f curve, boolean closed)
    {
        Mat curve_mat = curve;
        double retVal = arcLength_0(curve_mat.nativeObj, closed);
        
        return retVal;
    }


    //
    // C++:  void bilateralFilter(Mat src, Mat& dst, int d, double sigmaColor, double sigmaSpace, int borderType = BORDER_DEFAULT)
    //

    //javadoc: bilateralFilter(src, dst, d, sigmaColor, sigmaSpace, borderType)
    public static void bilateralFilter(Mat src, Mat dst, int d, double sigmaColor, double sigmaSpace, int borderType)
    {
        
        bilateralFilter_0(src.nativeObj, dst.nativeObj, d, sigmaColor, sigmaSpace, borderType);
        
        return;
    }

    //javadoc: bilateralFilter(src, dst, d, sigmaColor, sigmaSpace)
    public static void bilateralFilter(Mat src, Mat dst, int d, double sigmaColor, double sigmaSpace)
    {
        
        bilateralFilter_1(src.nativeObj, dst.nativeObj, d, sigmaColor, sigmaSpace);
        
        return;
    }


    //
    // C++:  void blur(Mat src, Mat& dst, Size ksize, Point anchor = Point(-1,-1), int borderType = BORDER_DEFAULT)
    //

    //javadoc: blur(src, dst, ksize, anchor, borderType)
    public static void blur(Mat src, Mat dst, Size ksize, Point anchor, int borderType)
    {
        
        blur_0(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, anchor.x, anchor.y, borderType);
        
        return;
    }

    //javadoc: blur(src, dst, ksize, anchor)
    public static void blur(Mat src, Mat dst, Size ksize, Point anchor)
    {
        
        blur_1(src.nativeObj, dst.nativeObj, ksize.width, ksize.height, anchor.x, anchor.y);
        
        return;
    }

    //javadoc: blur(src, dst, ksize)
    public static void blur(Mat src, Mat dst, Size ksize)
    {
        
        blur_2(src.nativeObj, dst.nativeObj, ksize.width, ksize.height);
        
        return;
    }


    //
    // C++:  int borderInterpolate(int p, int len, int borderType)
    //

    //javadoc: borderInterpolate(p, len, borderType)
    public static int borderInterpolate(int p, int len, int borderType)
    {
        
        int retVal = borderInterpolate_0(p, len, borderType);
        
        return retVal;
    }


    //
    // C++:  Rect boundingRect(vector_Point points)
    //

    //javadoc: boundingRect(points)
    public static Rect boundingRect(MatOfPoint points)
    {
        Mat points_mat = points;
        Rect retVal = new Rect(boundingRect_0(points_mat.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void boxFilter(Mat src, Mat& dst, int ddepth, Size ksize, Point anchor = Point(-1,-1), bool normalize = true, int borderType = BORDER_DEFAULT)
    //

    //javadoc: boxFilter(src, dst, ddepth, ksize, anchor, normalize, borderType)
    public static void boxFilter(Mat src, Mat dst, int ddepth, Size ksize, Point anchor, boolean normalize, int borderType)
    {
        
        boxFilter_0(src.nativeObj, dst.nativeObj, ddepth, ksize.width, ksize.height, anchor.x, anchor.y, normalize, borderType);
        
        return;
    }

    //javadoc: boxFilter(src, dst, ddepth, ksize, anchor, normalize)
    public static void boxFilter(Mat src, Mat dst, int ddepth, Size ksize, Point anchor, boolean normalize)
    {
        
        boxFilter_1(src.nativeObj, dst.nativeObj, ddepth, ksize.width, ksize.height, anchor.x, anchor.y, normalize);
        
        return;
    }

    //javadoc: boxFilter(src, dst, ddepth, ksize)
    public static void boxFilter(Mat src, Mat dst, int ddepth, Size ksize)
    {
        
        boxFilter_2(src.nativeObj, dst.nativeObj, ddepth, ksize.width, ksize.height);
        
        return;
    }


    //
    // C++:  void calcBackProject(vector_Mat images, vector_int channels, Mat hist, Mat& dst, vector_float ranges, double scale)
    //

    //javadoc: calcBackProject(images, channels, hist, dst, ranges, scale)
    public static void calcBackProject(List<Mat> images, MatOfInt channels, Mat hist, Mat dst, MatOfFloat ranges, double scale)
    {
        Mat images_mat = Converters.vector_Mat_to_Mat(images);
        Mat channels_mat = channels;
        Mat ranges_mat = ranges;
        calcBackProject_0(images_mat.nativeObj, channels_mat.nativeObj, hist.nativeObj, dst.nativeObj, ranges_mat.nativeObj, scale);
        
        return;
    }


    //
    // C++:  void calcHist(vector_Mat images, vector_int channels, Mat mask, Mat& hist, vector_int histSize, vector_float ranges, bool accumulate = false)
    //

    //javadoc: calcHist(images, channels, mask, hist, histSize, ranges, accumulate)
    public static void calcHist(List<Mat> images, MatOfInt channels, Mat mask, Mat hist, MatOfInt histSize, MatOfFloat ranges, boolean accumulate)
    {
        Mat images_mat = Converters.vector_Mat_to_Mat(images);
        Mat channels_mat = channels;
        Mat histSize_mat = histSize;
        Mat ranges_mat = ranges;
        calcHist_0(images_mat.nativeObj, channels_mat.nativeObj, mask.nativeObj, hist.nativeObj, histSize_mat.nativeObj, ranges_mat.nativeObj, accumulate);
        
        return;
    }

    //javadoc: calcHist(images, channels, mask, hist, histSize, ranges)
    public static void calcHist(List<Mat> images, MatOfInt channels, Mat mask, Mat hist, MatOfInt histSize, MatOfFloat ranges)
    {
        Mat images_mat = Converters.vector_Mat_to_Mat(images);
        Mat channels_mat = channels;
        Mat histSize_mat = histSize;
        Mat ranges_mat = ranges;
        calcHist_1(images_mat.nativeObj, channels_mat.nativeObj, mask.nativeObj, hist.nativeObj, histSize_mat.nativeObj, ranges_mat.nativeObj);
        
        return;
    }


    //
    // C++:  double compareHist(Mat H1, Mat H2, int method)
    //

    //javadoc: compareHist(H1, H2, method)
    public static double compareHist(Mat H1, Mat H2, int method)
    {
        
        double retVal = compareHist_0(H1.nativeObj, H2.nativeObj, method);
        
        return retVal;
    }


    //
    // C++:  double contourArea(Mat contour, bool oriented = false)
    //

    //javadoc: contourArea(contour, oriented)
    public static double contourArea(Mat contour, boolean oriented)
    {
        
        double retVal = contourArea_0(contour.nativeObj, oriented);
        
        return retVal;
    }

    //javadoc: contourArea(contour)
    public static double contourArea(Mat contour)
    {
        
        double retVal = contourArea_1(contour.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void convertMaps(Mat map1, Mat map2, Mat& dstmap1, Mat& dstmap2, int dstmap1type, bool nninterpolation = false)
    //

    //javadoc: convertMaps(map1, map2, dstmap1, dstmap2, dstmap1type, nninterpolation)
    public static void convertMaps(Mat map1, Mat map2, Mat dstmap1, Mat dstmap2, int dstmap1type, boolean nninterpolation)
    {
        
        convertMaps_0(map1.nativeObj, map2.nativeObj, dstmap1.nativeObj, dstmap2.nativeObj, dstmap1type, nninterpolation);
        
        return;
    }

    //javadoc: convertMaps(map1, map2, dstmap1, dstmap2, dstmap1type)
    public static void convertMaps(Mat map1, Mat map2, Mat dstmap1, Mat dstmap2, int dstmap1type)
    {
        
        convertMaps_1(map1.nativeObj, map2.nativeObj, dstmap1.nativeObj, dstmap2.nativeObj, dstmap1type);
        
        return;
    }


    //
    // C++:  void convexHull(vector_Point points, vector_int& hull, bool clockwise = false,  _hidden_  returnPoints = true)
    //

    //javadoc: convexHull(points, hull, clockwise)
    public static void convexHull(MatOfPoint points, MatOfInt hull, boolean clockwise)
    {
        Mat points_mat = points;
        Mat hull_mat = hull;
        convexHull_0(points_mat.nativeObj, hull_mat.nativeObj, clockwise);
        
        return;
    }

    //javadoc: convexHull(points, hull)
    public static void convexHull(MatOfPoint points, MatOfInt hull)
    {
        Mat points_mat = points;
        Mat hull_mat = hull;
        convexHull_1(points_mat.nativeObj, hull_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void convexityDefects(vector_Point contour, vector_int convexhull, vector_Vec4i& convexityDefects)
    //

    //javadoc: convexityDefects(contour, convexhull, convexityDefects)
    public static void convexityDefects(MatOfPoint contour, MatOfInt convexhull, MatOfInt4 convexityDefects)
    {
        Mat contour_mat = contour;
        Mat convexhull_mat = convexhull;
        Mat convexityDefects_mat = convexityDefects;
        convexityDefects_0(contour_mat.nativeObj, convexhull_mat.nativeObj, convexityDefects_mat.nativeObj);
        
        return;
    }


    //
    // C++:  void copyMakeBorder(Mat src, Mat& dst, int top, int bottom, int left, int right, int borderType, Scalar value = Scalar())
    //

    //javadoc: copyMakeBorder(src, dst, top, bottom, left, right, borderType, value)
    public static void copyMakeBorder(Mat src, Mat dst, int top, int bottom, int left, int right, int borderType, Scalar value)
    {
        
        copyMakeBorder_0(src.nativeObj, dst.nativeObj, top, bottom, left, right, borderType, value.val[0], value.val[1], value.val[2], value.val[3]);
        
        return;
    }

    //javadoc: copyMakeBorder(src, dst, top, bottom, left, right, borderType)
    public static void copyMakeBorder(Mat src, Mat dst, int top, int bottom, int left, int right, int borderType)
    {
        
        copyMakeBorder_1(src.nativeObj, dst.nativeObj, top, bottom, left, right, borderType);
        
        return;
    }


    //
    // C++:  void cornerEigenValsAndVecs(Mat src, Mat& dst, int blockSize, int ksize, int borderType = BORDER_DEFAULT)
    //

    //javadoc: cornerEigenValsAndVecs(src, dst, blockSize, ksize, borderType)
    public static void cornerEigenValsAndVecs(Mat src, Mat dst, int blockSize, int ksize, int borderType)
    {
        
        cornerEigenValsAndVecs_0(src.nativeObj, dst.nativeObj, blockSize, ksize, borderType);
        
        return;
    }

    //javadoc: cornerEigenValsAndVecs(src, dst, blockSize, ksize)
    public static void cornerEigenValsAndVecs(Mat src, Mat dst, int blockSize, int ksize)
    {
        
        cornerEigenValsAndVecs_1(src.nativeObj, dst.nativeObj, blockSize, ksize);
        
        return;
    }


    //
    // C++:  void cornerHarris(Mat src, Mat& dst, int blockSize, int ksize, double k, int borderType = BORDER_DEFAULT)
    //

    //javadoc: cornerHarris(src, dst, blockSize, ksize, k, borderType)
    public static void cornerHarris(Mat src, Mat dst, int blockSize, int ksize, double k, int borderType)
    {
        
        cornerHarris_0(src.nativeObj, dst.nativeObj, blockSize, ksize, k, borderType);
        
        return;
    }

    //javadoc: cornerHarris(src, dst, blockSize, ksize, k)
    public static void cornerHarris(Mat src, Mat dst, int blockSize, int ksize, double k)
    {
        
        cornerHarris_1(src.nativeObj, dst.nativeObj, blockSize, ksize, k);
        
        return;
    }


    //
    // C++:  void cornerMinEigenVal(Mat src, Mat& dst, int blockSize, int ksize = 3, int borderType = BORDER_DEFAULT)
    //

    //javadoc: cornerMinEigenVal(src, dst, blockSize, ksize, borderType)
    public static void cornerMinEigenVal(Mat src, Mat dst, int blockSize, int ksize, int borderType)
    {
        
        cornerMinEigenVal_0(src.nativeObj, dst.nativeObj, blockSize, ksize, borderType);
        
        return;
    }

    //javadoc: cornerMinEigenVal(src, dst, blockSize, ksize)
    public static void cornerMinEigenVal(Mat src, Mat dst, int blockSize, int ksize)
    {
        
        cornerMinEigenVal_1(src.nativeObj, dst.nativeObj, blockSize, ksize);
        
        return;
    }

    //javadoc: cornerMinEigenVal(src, dst, blockSize)
    public static void cornerMinEigenVal(Mat src, Mat dst, int blockSize)
    {
        
        cornerMinEigenVal_2(src.nativeObj, dst.nativeObj, blockSize);
        
        return;
    }


    //
    // C++:  void cornerSubPix(Mat image, vector_Point2f& corners, Size winSize, Size zeroZone, TermCriteria criteria)
    //

    //javadoc: cornerSubPix(image, corners, winSize, zeroZone, criteria)
    public static void cornerSubPix(Mat image, MatOfPoint2f corners, Size winSize, Size zeroZone, TermCriteria criteria)
    {
        Mat corners_mat = corners;
        cornerSubPix_0(image.nativeObj, corners_mat.nativeObj, winSize.width, winSize.height, zeroZone.width, zeroZone.height, criteria.type, criteria.maxCount, criteria.epsilon);
        
        return;
    }


    //
    // C++:  Ptr_CLAHE createCLAHE(double clipLimit = 40.0, Size tileGridSize = Size(8, 8))
    //

    // Return type 'Ptr_CLAHE' is not supported, skipping the function


    //
    // C++:  void createHanningWindow(Mat& dst, Size winSize, int type)
    //

    //javadoc: createHanningWindow(dst, winSize, type)
    public static void createHanningWindow(Mat dst, Size winSize, int type)
    {
        
        createHanningWindow_0(dst.nativeObj, winSize.width, winSize.height, type);
        
        return;
    }


    //
    // C++:  void cvtColor(Mat src, Mat& dst, int code, int dstCn = 0)
    //

    //javadoc: cvtColor(src, dst, code, dstCn)
    public static void cvtColor(Mat src, Mat dst, int code, int dstCn)
    {
        
        cvtColor_0(src.nativeObj, dst.nativeObj, code, dstCn);
        
        return;
    }

    //javadoc: cvtColor(src, dst, code)
    public static void cvtColor(Mat src, Mat dst, int code)
    {
        
        cvtColor_1(src.nativeObj, dst.nativeObj, code);
        
        return;
    }


    //
    // C++:  void dilate(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    //

    //javadoc: dilate(src, dst, kernel, anchor, iterations, borderType, borderValue)
    public static void dilate(Mat src, Mat dst, Mat kernel, Point anchor, int iterations, int borderType, Scalar borderValue)
    {
        
        dilate_0(src.nativeObj, dst.nativeObj, kernel.nativeObj, anchor.x, anchor.y, iterations, borderType, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: dilate(src, dst, kernel, anchor, iterations)
    public static void dilate(Mat src, Mat dst, Mat kernel, Point anchor, int iterations)
    {
        
        dilate_1(src.nativeObj, dst.nativeObj, kernel.nativeObj, anchor.x, anchor.y, iterations);
        
        return;
    }

    //javadoc: dilate(src, dst, kernel)
    public static void dilate(Mat src, Mat dst, Mat kernel)
    {
        
        dilate_2(src.nativeObj, dst.nativeObj, kernel.nativeObj);
        
        return;
    }


    //
    // C++:  void distanceTransform(Mat src, Mat& dst, int distanceType, int maskSize)
    //

    //javadoc: distanceTransform(src, dst, distanceType, maskSize)
    public static void distanceTransform(Mat src, Mat dst, int distanceType, int maskSize)
    {
        
        distanceTransform_0(src.nativeObj, dst.nativeObj, distanceType, maskSize);
        
        return;
    }


    //
    // C++:  void distanceTransform(Mat src, Mat& dst, Mat& labels, int distanceType, int maskSize, int labelType = DIST_LABEL_CCOMP)
    //

    //javadoc: distanceTransform(src, dst, labels, distanceType, maskSize, labelType)
    public static void distanceTransformWithLabels(Mat src, Mat dst, Mat labels, int distanceType, int maskSize, int labelType)
    {
        
        distanceTransformWithLabels_0(src.nativeObj, dst.nativeObj, labels.nativeObj, distanceType, maskSize, labelType);
        
        return;
    }

    //javadoc: distanceTransform(src, dst, labels, distanceType, maskSize)
    public static void distanceTransformWithLabels(Mat src, Mat dst, Mat labels, int distanceType, int maskSize)
    {
        
        distanceTransformWithLabels_1(src.nativeObj, dst.nativeObj, labels.nativeObj, distanceType, maskSize);
        
        return;
    }


    //
    // C++:  void drawContours(Mat& image, vector_vector_Point contours, int contourIdx, Scalar color, int thickness = 1, int lineType = 8, Mat hierarchy = Mat(), int maxLevel = INT_MAX, Point offset = Point())
    //

    //javadoc: drawContours(image, contours, contourIdx, color, thickness, lineType, hierarchy, maxLevel, offset)
    public static void drawContours(Mat image, List<MatOfPoint> contours, int contourIdx, Scalar color, int thickness, int lineType, Mat hierarchy, int maxLevel, Point offset)
    {
        List<Mat> contours_tmplm = new ArrayList<Mat>((contours != null) ? contours.size() : 0);
        Mat contours_mat = Converters.vector_vector_Point_to_Mat(contours, contours_tmplm);
        drawContours_0(image.nativeObj, contours_mat.nativeObj, contourIdx, color.val[0], color.val[1], color.val[2], color.val[3], thickness, lineType, hierarchy.nativeObj, maxLevel, offset.x, offset.y);
        
        return;
    }

    //javadoc: drawContours(image, contours, contourIdx, color, thickness)
    public static void drawContours(Mat image, List<MatOfPoint> contours, int contourIdx, Scalar color, int thickness)
    {
        List<Mat> contours_tmplm = new ArrayList<Mat>((contours != null) ? contours.size() : 0);
        Mat contours_mat = Converters.vector_vector_Point_to_Mat(contours, contours_tmplm);
        drawContours_1(image.nativeObj, contours_mat.nativeObj, contourIdx, color.val[0], color.val[1], color.val[2], color.val[3], thickness);
        
        return;
    }

    //javadoc: drawContours(image, contours, contourIdx, color)
    public static void drawContours(Mat image, List<MatOfPoint> contours, int contourIdx, Scalar color)
    {
        List<Mat> contours_tmplm = new ArrayList<Mat>((contours != null) ? contours.size() : 0);
        Mat contours_mat = Converters.vector_vector_Point_to_Mat(contours, contours_tmplm);
        drawContours_2(image.nativeObj, contours_mat.nativeObj, contourIdx, color.val[0], color.val[1], color.val[2], color.val[3]);
        
        return;
    }


    //
    // C++:  void equalizeHist(Mat src, Mat& dst)
    //

    //javadoc: equalizeHist(src, dst)
    public static void equalizeHist(Mat src, Mat dst)
    {
        
        equalizeHist_0(src.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void erode(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    //

    //javadoc: erode(src, dst, kernel, anchor, iterations, borderType, borderValue)
    public static void erode(Mat src, Mat dst, Mat kernel, Point anchor, int iterations, int borderType, Scalar borderValue)
    {
        
        erode_0(src.nativeObj, dst.nativeObj, kernel.nativeObj, anchor.x, anchor.y, iterations, borderType, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: erode(src, dst, kernel, anchor, iterations)
    public static void erode(Mat src, Mat dst, Mat kernel, Point anchor, int iterations)
    {
        
        erode_1(src.nativeObj, dst.nativeObj, kernel.nativeObj, anchor.x, anchor.y, iterations);
        
        return;
    }

    //javadoc: erode(src, dst, kernel)
    public static void erode(Mat src, Mat dst, Mat kernel)
    {
        
        erode_2(src.nativeObj, dst.nativeObj, kernel.nativeObj);
        
        return;
    }


    //
    // C++:  void filter2D(Mat src, Mat& dst, int ddepth, Mat kernel, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: filter2D(src, dst, ddepth, kernel, anchor, delta, borderType)
    public static void filter2D(Mat src, Mat dst, int ddepth, Mat kernel, Point anchor, double delta, int borderType)
    {
        
        filter2D_0(src.nativeObj, dst.nativeObj, ddepth, kernel.nativeObj, anchor.x, anchor.y, delta, borderType);
        
        return;
    }

    //javadoc: filter2D(src, dst, ddepth, kernel, anchor, delta)
    public static void filter2D(Mat src, Mat dst, int ddepth, Mat kernel, Point anchor, double delta)
    {
        
        filter2D_1(src.nativeObj, dst.nativeObj, ddepth, kernel.nativeObj, anchor.x, anchor.y, delta);
        
        return;
    }

    //javadoc: filter2D(src, dst, ddepth, kernel)
    public static void filter2D(Mat src, Mat dst, int ddepth, Mat kernel)
    {
        
        filter2D_2(src.nativeObj, dst.nativeObj, ddepth, kernel.nativeObj);
        
        return;
    }


    //
    // C++:  void findContours(Mat& image, vector_vector_Point& contours, Mat& hierarchy, int mode, int method, Point offset = Point())
    //

    //javadoc: findContours(image, contours, hierarchy, mode, method, offset)
    public static void findContours(Mat image, List<MatOfPoint> contours, Mat hierarchy, int mode, int method, Point offset)
    {
        Mat contours_mat = new Mat();
        findContours_0(image.nativeObj, contours_mat.nativeObj, hierarchy.nativeObj, mode, method, offset.x, offset.y);
        Converters.Mat_to_vector_vector_Point(contours_mat, contours);
        return;
    }

    //javadoc: findContours(image, contours, hierarchy, mode, method)
    public static void findContours(Mat image, List<MatOfPoint> contours, Mat hierarchy, int mode, int method)
    {
        Mat contours_mat = new Mat();
        findContours_1(image.nativeObj, contours_mat.nativeObj, hierarchy.nativeObj, mode, method);
        Converters.Mat_to_vector_vector_Point(contours_mat, contours);
        return;
    }


    //
    // C++:  RotatedRect fitEllipse(vector_Point2f points)
    //

    //javadoc: fitEllipse(points)
    public static RotatedRect fitEllipse(MatOfPoint2f points)
    {
        Mat points_mat = points;
        RotatedRect retVal = new RotatedRect(fitEllipse_0(points_mat.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void fitLine(Mat points, Mat& line, int distType, double param, double reps, double aeps)
    //

    //javadoc: fitLine(points, line, distType, param, reps, aeps)
    public static void fitLine(Mat points, Mat line, int distType, double param, double reps, double aeps)
    {
        
        fitLine_0(points.nativeObj, line.nativeObj, distType, param, reps, aeps);
        
        return;
    }


    //
    // C++:  int floodFill(Mat& image, Mat& mask, Point seedPoint, Scalar newVal, Rect* rect = 0, Scalar loDiff = Scalar(), Scalar upDiff = Scalar(), int flags = 4)
    //

    //javadoc: floodFill(image, mask, seedPoint, newVal, rect, loDiff, upDiff, flags)
    public static int floodFill(Mat image, Mat mask, Point seedPoint, Scalar newVal, Rect rect, Scalar loDiff, Scalar upDiff, int flags)
    {
        double[] rect_out = new double[4];
        int retVal = floodFill_0(image.nativeObj, mask.nativeObj, seedPoint.x, seedPoint.y, newVal.val[0], newVal.val[1], newVal.val[2], newVal.val[3], rect_out, loDiff.val[0], loDiff.val[1], loDiff.val[2], loDiff.val[3], upDiff.val[0], upDiff.val[1], upDiff.val[2], upDiff.val[3], flags);
        if(rect!=null){ rect.x = (int)rect_out[0]; rect.y = (int)rect_out[1]; rect.width = (int)rect_out[2]; rect.height = (int)rect_out[3]; } 
        return retVal;
    }

    //javadoc: floodFill(image, mask, seedPoint, newVal)
    public static int floodFill(Mat image, Mat mask, Point seedPoint, Scalar newVal)
    {
        
        int retVal = floodFill_1(image.nativeObj, mask.nativeObj, seedPoint.x, seedPoint.y, newVal.val[0], newVal.val[1], newVal.val[2], newVal.val[3]);
        
        return retVal;
    }


    //
    // C++:  Mat getAffineTransform(vector_Point2f src, vector_Point2f dst)
    //

    //javadoc: getAffineTransform(src, dst)
    public static Mat getAffineTransform(MatOfPoint2f src, MatOfPoint2f dst)
    {
        Mat src_mat = src;
        Mat dst_mat = dst;
        Mat retVal = new Mat(getAffineTransform_0(src_mat.nativeObj, dst_mat.nativeObj));
        
        return retVal;
    }


    //
    // C++:  Mat getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize = Size(), bool centerPrincipalPoint = false)
    //

    //javadoc: getDefaultNewCameraMatrix(cameraMatrix, imgsize, centerPrincipalPoint)
    public static Mat getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize, boolean centerPrincipalPoint)
    {
        
        Mat retVal = new Mat(getDefaultNewCameraMatrix_0(cameraMatrix.nativeObj, imgsize.width, imgsize.height, centerPrincipalPoint));
        
        return retVal;
    }

    //javadoc: getDefaultNewCameraMatrix(cameraMatrix)
    public static Mat getDefaultNewCameraMatrix(Mat cameraMatrix)
    {
        
        Mat retVal = new Mat(getDefaultNewCameraMatrix_1(cameraMatrix.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void getDerivKernels(Mat& kx, Mat& ky, int dx, int dy, int ksize, bool normalize = false, int ktype = CV_32F)
    //

    //javadoc: getDerivKernels(kx, ky, dx, dy, ksize, normalize, ktype)
    public static void getDerivKernels(Mat kx, Mat ky, int dx, int dy, int ksize, boolean normalize, int ktype)
    {
        
        getDerivKernels_0(kx.nativeObj, ky.nativeObj, dx, dy, ksize, normalize, ktype);
        
        return;
    }

    //javadoc: getDerivKernels(kx, ky, dx, dy, ksize)
    public static void getDerivKernels(Mat kx, Mat ky, int dx, int dy, int ksize)
    {
        
        getDerivKernels_1(kx.nativeObj, ky.nativeObj, dx, dy, ksize);
        
        return;
    }


    //
    // C++:  Mat getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma, double psi = CV_PI*0.5, int ktype = CV_64F)
    //

    //javadoc: getGaborKernel(ksize, sigma, theta, lambd, gamma, psi, ktype)
    public static Mat getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma, double psi, int ktype)
    {
        
        Mat retVal = new Mat(getGaborKernel_0(ksize.width, ksize.height, sigma, theta, lambd, gamma, psi, ktype));
        
        return retVal;
    }

    //javadoc: getGaborKernel(ksize, sigma, theta, lambd, gamma)
    public static Mat getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma)
    {
        
        Mat retVal = new Mat(getGaborKernel_1(ksize.width, ksize.height, sigma, theta, lambd, gamma));
        
        return retVal;
    }


    //
    // C++:  Mat getGaussianKernel(int ksize, double sigma, int ktype = CV_64F)
    //

    //javadoc: getGaussianKernel(ksize, sigma, ktype)
    public static Mat getGaussianKernel(int ksize, double sigma, int ktype)
    {
        
        Mat retVal = new Mat(getGaussianKernel_0(ksize, sigma, ktype));
        
        return retVal;
    }

    //javadoc: getGaussianKernel(ksize, sigma)
    public static Mat getGaussianKernel(int ksize, double sigma)
    {
        
        Mat retVal = new Mat(getGaussianKernel_1(ksize, sigma));
        
        return retVal;
    }


    //
    // C++:  Mat getPerspectiveTransform(Mat src, Mat dst)
    //

    //javadoc: getPerspectiveTransform(src, dst)
    public static Mat getPerspectiveTransform(Mat src, Mat dst)
    {
        
        Mat retVal = new Mat(getPerspectiveTransform_0(src.nativeObj, dst.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void getRectSubPix(Mat image, Size patchSize, Point2f center, Mat& patch, int patchType = -1)
    //

    //javadoc: getRectSubPix(image, patchSize, center, patch, patchType)
    public static void getRectSubPix(Mat image, Size patchSize, Point center, Mat patch, int patchType)
    {
        
        getRectSubPix_0(image.nativeObj, patchSize.width, patchSize.height, center.x, center.y, patch.nativeObj, patchType);
        
        return;
    }

    //javadoc: getRectSubPix(image, patchSize, center, patch)
    public static void getRectSubPix(Mat image, Size patchSize, Point center, Mat patch)
    {
        
        getRectSubPix_1(image.nativeObj, patchSize.width, patchSize.height, center.x, center.y, patch.nativeObj);
        
        return;
    }


    //
    // C++:  Mat getRotationMatrix2D(Point2f center, double angle, double scale)
    //

    //javadoc: getRotationMatrix2D(center, angle, scale)
    public static Mat getRotationMatrix2D(Point center, double angle, double scale)
    {
        
        Mat retVal = new Mat(getRotationMatrix2D_0(center.x, center.y, angle, scale));
        
        return retVal;
    }


    //
    // C++:  Mat getStructuringElement(int shape, Size ksize, Point anchor = Point(-1,-1))
    //

    //javadoc: getStructuringElement(shape, ksize, anchor)
    public static Mat getStructuringElement(int shape, Size ksize, Point anchor)
    {
        
        Mat retVal = new Mat(getStructuringElement_0(shape, ksize.width, ksize.height, anchor.x, anchor.y));
        
        return retVal;
    }

    //javadoc: getStructuringElement(shape, ksize)
    public static Mat getStructuringElement(int shape, Size ksize)
    {
        
        Mat retVal = new Mat(getStructuringElement_1(shape, ksize.width, ksize.height));
        
        return retVal;
    }


    //
    // C++:  void goodFeaturesToTrack(Mat image, vector_Point& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask = Mat(), int blockSize = 3, bool useHarrisDetector = false, double k = 0.04)
    //

    //javadoc: goodFeaturesToTrack(image, corners, maxCorners, qualityLevel, minDistance, mask, blockSize, useHarrisDetector, k)
    public static void goodFeaturesToTrack(Mat image, MatOfPoint corners, int maxCorners, double qualityLevel, double minDistance, Mat mask, int blockSize, boolean useHarrisDetector, double k)
    {
        Mat corners_mat = corners;
        goodFeaturesToTrack_0(image.nativeObj, corners_mat.nativeObj, maxCorners, qualityLevel, minDistance, mask.nativeObj, blockSize, useHarrisDetector, k);
        
        return;
    }

    //javadoc: goodFeaturesToTrack(image, corners, maxCorners, qualityLevel, minDistance)
    public static void goodFeaturesToTrack(Mat image, MatOfPoint corners, int maxCorners, double qualityLevel, double minDistance)
    {
        Mat corners_mat = corners;
        goodFeaturesToTrack_1(image.nativeObj, corners_mat.nativeObj, maxCorners, qualityLevel, minDistance);
        
        return;
    }


    //
    // C++:  void grabCut(Mat img, Mat& mask, Rect rect, Mat& bgdModel, Mat& fgdModel, int iterCount, int mode = GC_EVAL)
    //

    //javadoc: grabCut(img, mask, rect, bgdModel, fgdModel, iterCount, mode)
    public static void grabCut(Mat img, Mat mask, Rect rect, Mat bgdModel, Mat fgdModel, int iterCount, int mode)
    {
        
        grabCut_0(img.nativeObj, mask.nativeObj, rect.x, rect.y, rect.width, rect.height, bgdModel.nativeObj, fgdModel.nativeObj, iterCount, mode);
        
        return;
    }

    //javadoc: grabCut(img, mask, rect, bgdModel, fgdModel, iterCount)
    public static void grabCut(Mat img, Mat mask, Rect rect, Mat bgdModel, Mat fgdModel, int iterCount)
    {
        
        grabCut_1(img.nativeObj, mask.nativeObj, rect.x, rect.y, rect.width, rect.height, bgdModel.nativeObj, fgdModel.nativeObj, iterCount);
        
        return;
    }


    //
    // C++:  void initUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat R, Mat newCameraMatrix, Size size, int m1type, Mat& map1, Mat& map2)
    //

    //javadoc: initUndistortRectifyMap(cameraMatrix, distCoeffs, R, newCameraMatrix, size, m1type, map1, map2)
    public static void initUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat R, Mat newCameraMatrix, Size size, int m1type, Mat map1, Mat map2)
    {
        
        initUndistortRectifyMap_0(cameraMatrix.nativeObj, distCoeffs.nativeObj, R.nativeObj, newCameraMatrix.nativeObj, size.width, size.height, m1type, map1.nativeObj, map2.nativeObj);
        
        return;
    }


    //
    // C++:  float initWideAngleProjMap(Mat cameraMatrix, Mat distCoeffs, Size imageSize, int destImageWidth, int m1type, Mat& map1, Mat& map2, int projType = PROJ_SPHERICAL_EQRECT, double alpha = 0)
    //

    //javadoc: initWideAngleProjMap(cameraMatrix, distCoeffs, imageSize, destImageWidth, m1type, map1, map2, projType, alpha)
    public static float initWideAngleProjMap(Mat cameraMatrix, Mat distCoeffs, Size imageSize, int destImageWidth, int m1type, Mat map1, Mat map2, int projType, double alpha)
    {
        
        float retVal = initWideAngleProjMap_0(cameraMatrix.nativeObj, distCoeffs.nativeObj, imageSize.width, imageSize.height, destImageWidth, m1type, map1.nativeObj, map2.nativeObj, projType, alpha);
        
        return retVal;
    }

    //javadoc: initWideAngleProjMap(cameraMatrix, distCoeffs, imageSize, destImageWidth, m1type, map1, map2)
    public static float initWideAngleProjMap(Mat cameraMatrix, Mat distCoeffs, Size imageSize, int destImageWidth, int m1type, Mat map1, Mat map2)
    {
        
        float retVal = initWideAngleProjMap_1(cameraMatrix.nativeObj, distCoeffs.nativeObj, imageSize.width, imageSize.height, destImageWidth, m1type, map1.nativeObj, map2.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void integral(Mat src, Mat& sum, int sdepth = -1)
    //

    //javadoc: integral(src, sum, sdepth)
    public static void integral(Mat src, Mat sum, int sdepth)
    {
        
        integral_0(src.nativeObj, sum.nativeObj, sdepth);
        
        return;
    }

    //javadoc: integral(src, sum)
    public static void integral(Mat src, Mat sum)
    {
        
        integral_1(src.nativeObj, sum.nativeObj);
        
        return;
    }


    //
    // C++:  void integral(Mat src, Mat& sum, Mat& sqsum, int sdepth = -1)
    //

    //javadoc: integral(src, sum, sqsum, sdepth)
    public static void integral2(Mat src, Mat sum, Mat sqsum, int sdepth)
    {
        
        integral2_0(src.nativeObj, sum.nativeObj, sqsum.nativeObj, sdepth);
        
        return;
    }

    //javadoc: integral(src, sum, sqsum)
    public static void integral2(Mat src, Mat sum, Mat sqsum)
    {
        
        integral2_1(src.nativeObj, sum.nativeObj, sqsum.nativeObj);
        
        return;
    }


    //
    // C++:  void integral(Mat src, Mat& sum, Mat& sqsum, Mat& tilted, int sdepth = -1)
    //

    //javadoc: integral(src, sum, sqsum, tilted, sdepth)
    public static void integral3(Mat src, Mat sum, Mat sqsum, Mat tilted, int sdepth)
    {
        
        integral3_0(src.nativeObj, sum.nativeObj, sqsum.nativeObj, tilted.nativeObj, sdepth);
        
        return;
    }

    //javadoc: integral(src, sum, sqsum, tilted)
    public static void integral3(Mat src, Mat sum, Mat sqsum, Mat tilted)
    {
        
        integral3_1(src.nativeObj, sum.nativeObj, sqsum.nativeObj, tilted.nativeObj);
        
        return;
    }


    //
    // C++:  float intersectConvexConvex(Mat _p1, Mat _p2, Mat& _p12, bool handleNested = true)
    //

    //javadoc: intersectConvexConvex(_p1, _p2, _p12, handleNested)
    public static float intersectConvexConvex(Mat _p1, Mat _p2, Mat _p12, boolean handleNested)
    {
        
        float retVal = intersectConvexConvex_0(_p1.nativeObj, _p2.nativeObj, _p12.nativeObj, handleNested);
        
        return retVal;
    }

    //javadoc: intersectConvexConvex(_p1, _p2, _p12)
    public static float intersectConvexConvex(Mat _p1, Mat _p2, Mat _p12)
    {
        
        float retVal = intersectConvexConvex_1(_p1.nativeObj, _p2.nativeObj, _p12.nativeObj);
        
        return retVal;
    }


    //
    // C++:  void invertAffineTransform(Mat M, Mat& iM)
    //

    //javadoc: invertAffineTransform(M, iM)
    public static void invertAffineTransform(Mat M, Mat iM)
    {
        
        invertAffineTransform_0(M.nativeObj, iM.nativeObj);
        
        return;
    }


    //
    // C++:  bool isContourConvex(vector_Point contour)
    //

    //javadoc: isContourConvex(contour)
    public static boolean isContourConvex(MatOfPoint contour)
    {
        Mat contour_mat = contour;
        boolean retVal = isContourConvex_0(contour_mat.nativeObj);
        
        return retVal;
    }


    //
    // C++:  double matchShapes(Mat contour1, Mat contour2, int method, double parameter)
    //

    //javadoc: matchShapes(contour1, contour2, method, parameter)
    public static double matchShapes(Mat contour1, Mat contour2, int method, double parameter)
    {
        
        double retVal = matchShapes_0(contour1.nativeObj, contour2.nativeObj, method, parameter);
        
        return retVal;
    }


    //
    // C++:  void matchTemplate(Mat image, Mat templ, Mat& result, int method)
    //

    //javadoc: matchTemplate(image, templ, result, method)
    public static void matchTemplate(Mat image, Mat templ, Mat result, int method)
    {
        
        matchTemplate_0(image.nativeObj, templ.nativeObj, result.nativeObj, method);
        
        return;
    }


    //
    // C++:  void medianBlur(Mat src, Mat& dst, int ksize)
    //

    //javadoc: medianBlur(src, dst, ksize)
    public static void medianBlur(Mat src, Mat dst, int ksize)
    {
        
        medianBlur_0(src.nativeObj, dst.nativeObj, ksize);
        
        return;
    }


    //
    // C++:  RotatedRect minAreaRect(vector_Point2f points)
    //

    //javadoc: minAreaRect(points)
    public static RotatedRect minAreaRect(MatOfPoint2f points)
    {
        Mat points_mat = points;
        RotatedRect retVal = new RotatedRect(minAreaRect_0(points_mat.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void minEnclosingCircle(vector_Point2f points, Point2f& center, float& radius)
    //

    //javadoc: minEnclosingCircle(points, center, radius)
    public static void minEnclosingCircle(MatOfPoint2f points, Point center, float[] radius)
    {
        Mat points_mat = points;
        double[] center_out = new double[2];
        double[] radius_out = new double[1];
        minEnclosingCircle_0(points_mat.nativeObj, center_out, radius_out);
        if(center!=null){ center.x = center_out[0]; center.y = center_out[1]; } 
        if(radius!=null) radius[0] = (float)radius_out[0];
        return;
    }


    //
    // C++:  Moments moments(Mat array, bool binaryImage = false)
    //

    //javadoc: moments(array, binaryImage)
    public static Moments moments(Mat array, boolean binaryImage)
    {
        
        Moments retVal = new Moments(moments_0(array.nativeObj, binaryImage));
        
        return retVal;
    }

    //javadoc: moments(array)
    public static Moments moments(Mat array)
    {
        
        Moments retVal = new Moments(moments_1(array.nativeObj));
        
        return retVal;
    }


    //
    // C++:  void morphologyEx(Mat src, Mat& dst, int op, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    //

    //javadoc: morphologyEx(src, dst, op, kernel, anchor, iterations, borderType, borderValue)
    public static void morphologyEx(Mat src, Mat dst, int op, Mat kernel, Point anchor, int iterations, int borderType, Scalar borderValue)
    {
        
        morphologyEx_0(src.nativeObj, dst.nativeObj, op, kernel.nativeObj, anchor.x, anchor.y, iterations, borderType, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: morphologyEx(src, dst, op, kernel, anchor, iterations)
    public static void morphologyEx(Mat src, Mat dst, int op, Mat kernel, Point anchor, int iterations)
    {
        
        morphologyEx_1(src.nativeObj, dst.nativeObj, op, kernel.nativeObj, anchor.x, anchor.y, iterations);
        
        return;
    }

    //javadoc: morphologyEx(src, dst, op, kernel)
    public static void morphologyEx(Mat src, Mat dst, int op, Mat kernel)
    {
        
        morphologyEx_2(src.nativeObj, dst.nativeObj, op, kernel.nativeObj);
        
        return;
    }


    //
    // C++:  Point2d phaseCorrelate(Mat src1, Mat src2, Mat window = Mat())
    //

    //javadoc: phaseCorrelate(src1, src2, window)
    public static Point phaseCorrelate(Mat src1, Mat src2, Mat window)
    {
        
        Point retVal = new Point(phaseCorrelate_0(src1.nativeObj, src2.nativeObj, window.nativeObj));
        
        return retVal;
    }

    //javadoc: phaseCorrelate(src1, src2)
    public static Point phaseCorrelate(Mat src1, Mat src2)
    {
        
        Point retVal = new Point(phaseCorrelate_1(src1.nativeObj, src2.nativeObj));
        
        return retVal;
    }


    //
    // C++:  Point2d phaseCorrelateRes(Mat src1, Mat src2, Mat window, double* response = 0)
    //

    //javadoc: phaseCorrelateRes(src1, src2, window, response)
    public static Point phaseCorrelateRes(Mat src1, Mat src2, Mat window, double[] response)
    {
        double[] response_out = new double[1];
        Point retVal = new Point(phaseCorrelateRes_0(src1.nativeObj, src2.nativeObj, window.nativeObj, response_out));
        if(response!=null) response[0] = (double)response_out[0];
        return retVal;
    }

    //javadoc: phaseCorrelateRes(src1, src2, window)
    public static Point phaseCorrelateRes(Mat src1, Mat src2, Mat window)
    {
        
        Point retVal = new Point(phaseCorrelateRes_1(src1.nativeObj, src2.nativeObj, window.nativeObj));
        
        return retVal;
    }


    //
    // C++:  double pointPolygonTest(vector_Point2f contour, Point2f pt, bool measureDist)
    //

    //javadoc: pointPolygonTest(contour, pt, measureDist)
    public static double pointPolygonTest(MatOfPoint2f contour, Point pt, boolean measureDist)
    {
        Mat contour_mat = contour;
        double retVal = pointPolygonTest_0(contour_mat.nativeObj, pt.x, pt.y, measureDist);
        
        return retVal;
    }


    //
    // C++:  void preCornerDetect(Mat src, Mat& dst, int ksize, int borderType = BORDER_DEFAULT)
    //

    //javadoc: preCornerDetect(src, dst, ksize, borderType)
    public static void preCornerDetect(Mat src, Mat dst, int ksize, int borderType)
    {
        
        preCornerDetect_0(src.nativeObj, dst.nativeObj, ksize, borderType);
        
        return;
    }

    //javadoc: preCornerDetect(src, dst, ksize)
    public static void preCornerDetect(Mat src, Mat dst, int ksize)
    {
        
        preCornerDetect_1(src.nativeObj, dst.nativeObj, ksize);
        
        return;
    }


    //
    // C++:  void pyrDown(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
    //

    //javadoc: pyrDown(src, dst, dstsize, borderType)
    public static void pyrDown(Mat src, Mat dst, Size dstsize, int borderType)
    {
        
        pyrDown_0(src.nativeObj, dst.nativeObj, dstsize.width, dstsize.height, borderType);
        
        return;
    }

    //javadoc: pyrDown(src, dst, dstsize)
    public static void pyrDown(Mat src, Mat dst, Size dstsize)
    {
        
        pyrDown_1(src.nativeObj, dst.nativeObj, dstsize.width, dstsize.height);
        
        return;
    }

    //javadoc: pyrDown(src, dst)
    public static void pyrDown(Mat src, Mat dst)
    {
        
        pyrDown_2(src.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void pyrMeanShiftFiltering(Mat src, Mat& dst, double sp, double sr, int maxLevel = 1, TermCriteria termcrit = TermCriteria( TermCriteria::MAX_ITER+TermCriteria::EPS,5,1))
    //

    //javadoc: pyrMeanShiftFiltering(src, dst, sp, sr, maxLevel, termcrit)
    public static void pyrMeanShiftFiltering(Mat src, Mat dst, double sp, double sr, int maxLevel, TermCriteria termcrit)
    {
        
        pyrMeanShiftFiltering_0(src.nativeObj, dst.nativeObj, sp, sr, maxLevel, termcrit.type, termcrit.maxCount, termcrit.epsilon);
        
        return;
    }

    //javadoc: pyrMeanShiftFiltering(src, dst, sp, sr)
    public static void pyrMeanShiftFiltering(Mat src, Mat dst, double sp, double sr)
    {
        
        pyrMeanShiftFiltering_1(src.nativeObj, dst.nativeObj, sp, sr);
        
        return;
    }


    //
    // C++:  void pyrUp(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
    //

    //javadoc: pyrUp(src, dst, dstsize, borderType)
    public static void pyrUp(Mat src, Mat dst, Size dstsize, int borderType)
    {
        
        pyrUp_0(src.nativeObj, dst.nativeObj, dstsize.width, dstsize.height, borderType);
        
        return;
    }

    //javadoc: pyrUp(src, dst, dstsize)
    public static void pyrUp(Mat src, Mat dst, Size dstsize)
    {
        
        pyrUp_1(src.nativeObj, dst.nativeObj, dstsize.width, dstsize.height);
        
        return;
    }

    //javadoc: pyrUp(src, dst)
    public static void pyrUp(Mat src, Mat dst)
    {
        
        pyrUp_2(src.nativeObj, dst.nativeObj);
        
        return;
    }


    //
    // C++:  void remap(Mat src, Mat& dst, Mat map1, Mat map2, int interpolation, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    //

    //javadoc: remap(src, dst, map1, map2, interpolation, borderMode, borderValue)
    public static void remap(Mat src, Mat dst, Mat map1, Mat map2, int interpolation, int borderMode, Scalar borderValue)
    {
        
        remap_0(src.nativeObj, dst.nativeObj, map1.nativeObj, map2.nativeObj, interpolation, borderMode, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: remap(src, dst, map1, map2, interpolation)
    public static void remap(Mat src, Mat dst, Mat map1, Mat map2, int interpolation)
    {
        
        remap_1(src.nativeObj, dst.nativeObj, map1.nativeObj, map2.nativeObj, interpolation);
        
        return;
    }


    //
    // C++:  void resize(Mat src, Mat& dst, Size dsize, double fx = 0, double fy = 0, int interpolation = INTER_LINEAR)
    //

    //javadoc: resize(src, dst, dsize, fx, fy, interpolation)
    public static void resize(Mat src, Mat dst, Size dsize, double fx, double fy, int interpolation)
    {
        
        resize_0(src.nativeObj, dst.nativeObj, dsize.width, dsize.height, fx, fy, interpolation);
        
        return;
    }

    //javadoc: resize(src, dst, dsize)
    public static void resize(Mat src, Mat dst, Size dsize)
    {
        
        resize_1(src.nativeObj, dst.nativeObj, dsize.width, dsize.height);
        
        return;
    }


    //
    // C++:  void sepFilter2D(Mat src, Mat& dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
    //

    //javadoc: sepFilter2D(src, dst, ddepth, kernelX, kernelY, anchor, delta, borderType)
    public static void sepFilter2D(Mat src, Mat dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor, double delta, int borderType)
    {
        
        sepFilter2D_0(src.nativeObj, dst.nativeObj, ddepth, kernelX.nativeObj, kernelY.nativeObj, anchor.x, anchor.y, delta, borderType);
        
        return;
    }

    //javadoc: sepFilter2D(src, dst, ddepth, kernelX, kernelY, anchor, delta)
    public static void sepFilter2D(Mat src, Mat dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor, double delta)
    {
        
        sepFilter2D_1(src.nativeObj, dst.nativeObj, ddepth, kernelX.nativeObj, kernelY.nativeObj, anchor.x, anchor.y, delta);
        
        return;
    }

    //javadoc: sepFilter2D(src, dst, ddepth, kernelX, kernelY)
    public static void sepFilter2D(Mat src, Mat dst, int ddepth, Mat kernelX, Mat kernelY)
    {
        
        sepFilter2D_2(src.nativeObj, dst.nativeObj, ddepth, kernelX.nativeObj, kernelY.nativeObj);
        
        return;
    }


    //
    // C++:  double threshold(Mat src, Mat& dst, double thresh, double maxval, int type)
    //

    //javadoc: threshold(src, dst, thresh, maxval, type)
    public static double threshold(Mat src, Mat dst, double thresh, double maxval, int type)
    {
        
        double retVal = threshold_0(src.nativeObj, dst.nativeObj, thresh, maxval, type);
        
        return retVal;
    }


    //
    // C++:  void undistort(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix = Mat())
    //

    //javadoc: undistort(src, dst, cameraMatrix, distCoeffs, newCameraMatrix)
    public static void undistort(Mat src, Mat dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix)
    {
        
        undistort_0(src.nativeObj, dst.nativeObj, cameraMatrix.nativeObj, distCoeffs.nativeObj, newCameraMatrix.nativeObj);
        
        return;
    }

    //javadoc: undistort(src, dst, cameraMatrix, distCoeffs)
    public static void undistort(Mat src, Mat dst, Mat cameraMatrix, Mat distCoeffs)
    {
        
        undistort_1(src.nativeObj, dst.nativeObj, cameraMatrix.nativeObj, distCoeffs.nativeObj);
        
        return;
    }


    //
    // C++:  void undistortPoints(vector_Point2f src, vector_Point2f& dst, Mat cameraMatrix, Mat distCoeffs, Mat R = Mat(), Mat P = Mat())
    //

    //javadoc: undistortPoints(src, dst, cameraMatrix, distCoeffs, R, P)
    public static void undistortPoints(MatOfPoint2f src, MatOfPoint2f dst, Mat cameraMatrix, Mat distCoeffs, Mat R, Mat P)
    {
        Mat src_mat = src;
        Mat dst_mat = dst;
        undistortPoints_0(src_mat.nativeObj, dst_mat.nativeObj, cameraMatrix.nativeObj, distCoeffs.nativeObj, R.nativeObj, P.nativeObj);
        
        return;
    }

    //javadoc: undistortPoints(src, dst, cameraMatrix, distCoeffs)
    public static void undistortPoints(MatOfPoint2f src, MatOfPoint2f dst, Mat cameraMatrix, Mat distCoeffs)
    {
        Mat src_mat = src;
        Mat dst_mat = dst;
        undistortPoints_1(src_mat.nativeObj, dst_mat.nativeObj, cameraMatrix.nativeObj, distCoeffs.nativeObj);
        
        return;
    }


    //
    // C++:  void warpAffine(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    //

    //javadoc: warpAffine(src, dst, M, dsize, flags, borderMode, borderValue)
    public static void warpAffine(Mat src, Mat dst, Mat M, Size dsize, int flags, int borderMode, Scalar borderValue)
    {
        
        warpAffine_0(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height, flags, borderMode, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: warpAffine(src, dst, M, dsize, flags)
    public static void warpAffine(Mat src, Mat dst, Mat M, Size dsize, int flags)
    {
        
        warpAffine_1(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height, flags);
        
        return;
    }

    //javadoc: warpAffine(src, dst, M, dsize)
    public static void warpAffine(Mat src, Mat dst, Mat M, Size dsize)
    {
        
        warpAffine_2(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height);
        
        return;
    }


    //
    // C++:  void warpPerspective(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    //

    //javadoc: warpPerspective(src, dst, M, dsize, flags, borderMode, borderValue)
    public static void warpPerspective(Mat src, Mat dst, Mat M, Size dsize, int flags, int borderMode, Scalar borderValue)
    {
        
        warpPerspective_0(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height, flags, borderMode, borderValue.val[0], borderValue.val[1], borderValue.val[2], borderValue.val[3]);
        
        return;
    }

    //javadoc: warpPerspective(src, dst, M, dsize, flags)
    public static void warpPerspective(Mat src, Mat dst, Mat M, Size dsize, int flags)
    {
        
        warpPerspective_1(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height, flags);
        
        return;
    }

    //javadoc: warpPerspective(src, dst, M, dsize)
    public static void warpPerspective(Mat src, Mat dst, Mat M, Size dsize)
    {
        
        warpPerspective_2(src.nativeObj, dst.nativeObj, M.nativeObj, dsize.width, dsize.height);
        
        return;
    }


    //
    // C++:  void watershed(Mat image, Mat& markers)
    //

    //javadoc: watershed(image, markers)
    public static void watershed(Mat image, Mat markers)
    {
        
        watershed_0(image.nativeObj, markers.nativeObj);
        
        return;
    }




    // C++:  void Canny(Mat image, Mat& edges, double threshold1, double threshold2, int apertureSize = 3, bool L2gradient = false)
    private static native void Canny_0(long image_nativeObj, long edges_nativeObj, double threshold1, double threshold2, int apertureSize, boolean L2gradient);
    private static native void Canny_1(long image_nativeObj, long edges_nativeObj, double threshold1, double threshold2);

    // C++:  void GaussianBlur(Mat src, Mat& dst, Size ksize, double sigmaX, double sigmaY = 0, int borderType = BORDER_DEFAULT)
    private static native void GaussianBlur_0(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaX, double sigmaY, int borderType);
    private static native void GaussianBlur_1(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaX, double sigmaY);
    private static native void GaussianBlur_2(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaX);

    // C++:  void HoughCircles(Mat image, Mat& circles, int method, double dp, double minDist, double param1 = 100, double param2 = 100, int minRadius = 0, int maxRadius = 0)
    private static native void HoughCircles_0(long image_nativeObj, long circles_nativeObj, int method, double dp, double minDist, double param1, double param2, int minRadius, int maxRadius);
    private static native void HoughCircles_1(long image_nativeObj, long circles_nativeObj, int method, double dp, double minDist);

    // C++:  void HoughLines(Mat image, Mat& lines, double rho, double theta, int threshold, double srn = 0, double stn = 0)
    private static native void HoughLines_0(long image_nativeObj, long lines_nativeObj, double rho, double theta, int threshold, double srn, double stn);
    private static native void HoughLines_1(long image_nativeObj, long lines_nativeObj, double rho, double theta, int threshold);

    // C++:  void HoughLinesP(Mat image, Mat& lines, double rho, double theta, int threshold, double minLineLength = 0, double maxLineGap = 0)
    private static native void HoughLinesP_0(long image_nativeObj, long lines_nativeObj, double rho, double theta, int threshold, double minLineLength, double maxLineGap);
    private static native void HoughLinesP_1(long image_nativeObj, long lines_nativeObj, double rho, double theta, int threshold);

    // C++:  void HuMoments(Moments m, Mat& hu)
    private static native void HuMoments_0(long m_nativeObj, long hu_nativeObj);

    // C++:  void Laplacian(Mat src, Mat& dst, int ddepth, int ksize = 1, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    private static native void Laplacian_0(long src_nativeObj, long dst_nativeObj, int ddepth, int ksize, double scale, double delta, int borderType);
    private static native void Laplacian_1(long src_nativeObj, long dst_nativeObj, int ddepth, int ksize, double scale, double delta);
    private static native void Laplacian_2(long src_nativeObj, long dst_nativeObj, int ddepth);

    // C++:  double PSNR(Mat src1, Mat src2)
    private static native double PSNR_0(long src1_nativeObj, long src2_nativeObj);

    // C++:  void Scharr(Mat src, Mat& dst, int ddepth, int dx, int dy, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    private static native void Scharr_0(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy, double scale, double delta, int borderType);
    private static native void Scharr_1(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy, double scale, double delta);
    private static native void Scharr_2(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy);

    // C++:  void Sobel(Mat src, Mat& dst, int ddepth, int dx, int dy, int ksize = 3, double scale = 1, double delta = 0, int borderType = BORDER_DEFAULT)
    private static native void Sobel_0(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy, int ksize, double scale, double delta, int borderType);
    private static native void Sobel_1(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy, int ksize, double scale, double delta);
    private static native void Sobel_2(long src_nativeObj, long dst_nativeObj, int ddepth, int dx, int dy);

    // C++:  void accumulate(Mat src, Mat& dst, Mat mask = Mat())
    private static native void accumulate_0(long src_nativeObj, long dst_nativeObj, long mask_nativeObj);
    private static native void accumulate_1(long src_nativeObj, long dst_nativeObj);

    // C++:  void accumulateProduct(Mat src1, Mat src2, Mat& dst, Mat mask = Mat())
    private static native void accumulateProduct_0(long src1_nativeObj, long src2_nativeObj, long dst_nativeObj, long mask_nativeObj);
    private static native void accumulateProduct_1(long src1_nativeObj, long src2_nativeObj, long dst_nativeObj);

    // C++:  void accumulateSquare(Mat src, Mat& dst, Mat mask = Mat())
    private static native void accumulateSquare_0(long src_nativeObj, long dst_nativeObj, long mask_nativeObj);
    private static native void accumulateSquare_1(long src_nativeObj, long dst_nativeObj);

    // C++:  void accumulateWeighted(Mat src, Mat& dst, double alpha, Mat mask = Mat())
    private static native void accumulateWeighted_0(long src_nativeObj, long dst_nativeObj, double alpha, long mask_nativeObj);
    private static native void accumulateWeighted_1(long src_nativeObj, long dst_nativeObj, double alpha);

    // C++:  void adaptiveBilateralFilter(Mat src, Mat& dst, Size ksize, double sigmaSpace, double maxSigmaColor = 20.0, Point anchor = Point(-1, -1), int borderType = BORDER_DEFAULT)
    private static native void adaptiveBilateralFilter_0(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaSpace, double maxSigmaColor, double anchor_x, double anchor_y, int borderType);
    private static native void adaptiveBilateralFilter_1(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaSpace, double maxSigmaColor, double anchor_x, double anchor_y);
    private static native void adaptiveBilateralFilter_2(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double sigmaSpace);

    // C++:  void adaptiveThreshold(Mat src, Mat& dst, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C)
    private static native void adaptiveThreshold_0(long src_nativeObj, long dst_nativeObj, double maxValue, int adaptiveMethod, int thresholdType, int blockSize, double C);

    // C++:  void approxPolyDP(vector_Point2f curve, vector_Point2f& approxCurve, double epsilon, bool closed)
    private static native void approxPolyDP_0(long curve_mat_nativeObj, long approxCurve_mat_nativeObj, double epsilon, boolean closed);

    // C++:  double arcLength(vector_Point2f curve, bool closed)
    private static native double arcLength_0(long curve_mat_nativeObj, boolean closed);

    // C++:  void bilateralFilter(Mat src, Mat& dst, int d, double sigmaColor, double sigmaSpace, int borderType = BORDER_DEFAULT)
    private static native void bilateralFilter_0(long src_nativeObj, long dst_nativeObj, int d, double sigmaColor, double sigmaSpace, int borderType);
    private static native void bilateralFilter_1(long src_nativeObj, long dst_nativeObj, int d, double sigmaColor, double sigmaSpace);

    // C++:  void blur(Mat src, Mat& dst, Size ksize, Point anchor = Point(-1,-1), int borderType = BORDER_DEFAULT)
    private static native void blur_0(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double anchor_x, double anchor_y, int borderType);
    private static native void blur_1(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height, double anchor_x, double anchor_y);
    private static native void blur_2(long src_nativeObj, long dst_nativeObj, double ksize_width, double ksize_height);

    // C++:  int borderInterpolate(int p, int len, int borderType)
    private static native int borderInterpolate_0(int p, int len, int borderType);

    // C++:  Rect boundingRect(vector_Point points)
    private static native double[] boundingRect_0(long points_mat_nativeObj);

    // C++:  void boxFilter(Mat src, Mat& dst, int ddepth, Size ksize, Point anchor = Point(-1,-1), bool normalize = true, int borderType = BORDER_DEFAULT)
    private static native void boxFilter_0(long src_nativeObj, long dst_nativeObj, int ddepth, double ksize_width, double ksize_height, double anchor_x, double anchor_y, boolean normalize, int borderType);
    private static native void boxFilter_1(long src_nativeObj, long dst_nativeObj, int ddepth, double ksize_width, double ksize_height, double anchor_x, double anchor_y, boolean normalize);
    private static native void boxFilter_2(long src_nativeObj, long dst_nativeObj, int ddepth, double ksize_width, double ksize_height);

    // C++:  void calcBackProject(vector_Mat images, vector_int channels, Mat hist, Mat& dst, vector_float ranges, double scale)
    private static native void calcBackProject_0(long images_mat_nativeObj, long channels_mat_nativeObj, long hist_nativeObj, long dst_nativeObj, long ranges_mat_nativeObj, double scale);

    // C++:  void calcHist(vector_Mat images, vector_int channels, Mat mask, Mat& hist, vector_int histSize, vector_float ranges, bool accumulate = false)
    private static native void calcHist_0(long images_mat_nativeObj, long channels_mat_nativeObj, long mask_nativeObj, long hist_nativeObj, long histSize_mat_nativeObj, long ranges_mat_nativeObj, boolean accumulate);
    private static native void calcHist_1(long images_mat_nativeObj, long channels_mat_nativeObj, long mask_nativeObj, long hist_nativeObj, long histSize_mat_nativeObj, long ranges_mat_nativeObj);

    // C++:  double compareHist(Mat H1, Mat H2, int method)
    private static native double compareHist_0(long H1_nativeObj, long H2_nativeObj, int method);

    // C++:  double contourArea(Mat contour, bool oriented = false)
    private static native double contourArea_0(long contour_nativeObj, boolean oriented);
    private static native double contourArea_1(long contour_nativeObj);

    // C++:  void convertMaps(Mat map1, Mat map2, Mat& dstmap1, Mat& dstmap2, int dstmap1type, bool nninterpolation = false)
    private static native void convertMaps_0(long map1_nativeObj, long map2_nativeObj, long dstmap1_nativeObj, long dstmap2_nativeObj, int dstmap1type, boolean nninterpolation);
    private static native void convertMaps_1(long map1_nativeObj, long map2_nativeObj, long dstmap1_nativeObj, long dstmap2_nativeObj, int dstmap1type);

    // C++:  void convexHull(vector_Point points, vector_int& hull, bool clockwise = false,  _hidden_  returnPoints = true)
    private static native void convexHull_0(long points_mat_nativeObj, long hull_mat_nativeObj, boolean clockwise);
    private static native void convexHull_1(long points_mat_nativeObj, long hull_mat_nativeObj);

    // C++:  void convexityDefects(vector_Point contour, vector_int convexhull, vector_Vec4i& convexityDefects)
    private static native void convexityDefects_0(long contour_mat_nativeObj, long convexhull_mat_nativeObj, long convexityDefects_mat_nativeObj);

    // C++:  void copyMakeBorder(Mat src, Mat& dst, int top, int bottom, int left, int right, int borderType, Scalar value = Scalar())
    private static native void copyMakeBorder_0(long src_nativeObj, long dst_nativeObj, int top, int bottom, int left, int right, int borderType, double value_val0, double value_val1, double value_val2, double value_val3);
    private static native void copyMakeBorder_1(long src_nativeObj, long dst_nativeObj, int top, int bottom, int left, int right, int borderType);

    // C++:  void cornerEigenValsAndVecs(Mat src, Mat& dst, int blockSize, int ksize, int borderType = BORDER_DEFAULT)
    private static native void cornerEigenValsAndVecs_0(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize, int borderType);
    private static native void cornerEigenValsAndVecs_1(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize);

    // C++:  void cornerHarris(Mat src, Mat& dst, int blockSize, int ksize, double k, int borderType = BORDER_DEFAULT)
    private static native void cornerHarris_0(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize, double k, int borderType);
    private static native void cornerHarris_1(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize, double k);

    // C++:  void cornerMinEigenVal(Mat src, Mat& dst, int blockSize, int ksize = 3, int borderType = BORDER_DEFAULT)
    private static native void cornerMinEigenVal_0(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize, int borderType);
    private static native void cornerMinEigenVal_1(long src_nativeObj, long dst_nativeObj, int blockSize, int ksize);
    private static native void cornerMinEigenVal_2(long src_nativeObj, long dst_nativeObj, int blockSize);

    // C++:  void cornerSubPix(Mat image, vector_Point2f& corners, Size winSize, Size zeroZone, TermCriteria criteria)
    private static native void cornerSubPix_0(long image_nativeObj, long corners_mat_nativeObj, double winSize_width, double winSize_height, double zeroZone_width, double zeroZone_height, int criteria_type, int criteria_maxCount, double criteria_epsilon);

    // C++:  void createHanningWindow(Mat& dst, Size winSize, int type)
    private static native void createHanningWindow_0(long dst_nativeObj, double winSize_width, double winSize_height, int type);

    // C++:  void cvtColor(Mat src, Mat& dst, int code, int dstCn = 0)
    private static native void cvtColor_0(long src_nativeObj, long dst_nativeObj, int code, int dstCn);
    private static native void cvtColor_1(long src_nativeObj, long dst_nativeObj, int code);

    // C++:  void dilate(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    private static native void dilate_0(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations, int borderType, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void dilate_1(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations);
    private static native void dilate_2(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj);

    // C++:  void distanceTransform(Mat src, Mat& dst, int distanceType, int maskSize)
    private static native void distanceTransform_0(long src_nativeObj, long dst_nativeObj, int distanceType, int maskSize);

    // C++:  void distanceTransform(Mat src, Mat& dst, Mat& labels, int distanceType, int maskSize, int labelType = DIST_LABEL_CCOMP)
    private static native void distanceTransformWithLabels_0(long src_nativeObj, long dst_nativeObj, long labels_nativeObj, int distanceType, int maskSize, int labelType);
    private static native void distanceTransformWithLabels_1(long src_nativeObj, long dst_nativeObj, long labels_nativeObj, int distanceType, int maskSize);

    // C++:  void drawContours(Mat& image, vector_vector_Point contours, int contourIdx, Scalar color, int thickness = 1, int lineType = 8, Mat hierarchy = Mat(), int maxLevel = INT_MAX, Point offset = Point())
    private static native void drawContours_0(long image_nativeObj, long contours_mat_nativeObj, int contourIdx, double color_val0, double color_val1, double color_val2, double color_val3, int thickness, int lineType, long hierarchy_nativeObj, int maxLevel, double offset_x, double offset_y);
    private static native void drawContours_1(long image_nativeObj, long contours_mat_nativeObj, int contourIdx, double color_val0, double color_val1, double color_val2, double color_val3, int thickness);
    private static native void drawContours_2(long image_nativeObj, long contours_mat_nativeObj, int contourIdx, double color_val0, double color_val1, double color_val2, double color_val3);

    // C++:  void equalizeHist(Mat src, Mat& dst)
    private static native void equalizeHist_0(long src_nativeObj, long dst_nativeObj);

    // C++:  void erode(Mat src, Mat& dst, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    private static native void erode_0(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations, int borderType, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void erode_1(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations);
    private static native void erode_2(long src_nativeObj, long dst_nativeObj, long kernel_nativeObj);

    // C++:  void filter2D(Mat src, Mat& dst, int ddepth, Mat kernel, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
    private static native void filter2D_0(long src_nativeObj, long dst_nativeObj, int ddepth, long kernel_nativeObj, double anchor_x, double anchor_y, double delta, int borderType);
    private static native void filter2D_1(long src_nativeObj, long dst_nativeObj, int ddepth, long kernel_nativeObj, double anchor_x, double anchor_y, double delta);
    private static native void filter2D_2(long src_nativeObj, long dst_nativeObj, int ddepth, long kernel_nativeObj);

    // C++:  void findContours(Mat& image, vector_vector_Point& contours, Mat& hierarchy, int mode, int method, Point offset = Point())
    private static native void findContours_0(long image_nativeObj, long contours_mat_nativeObj, long hierarchy_nativeObj, int mode, int method, double offset_x, double offset_y);
    private static native void findContours_1(long image_nativeObj, long contours_mat_nativeObj, long hierarchy_nativeObj, int mode, int method);

    // C++:  RotatedRect fitEllipse(vector_Point2f points)
    private static native double[] fitEllipse_0(long points_mat_nativeObj);

    // C++:  void fitLine(Mat points, Mat& line, int distType, double param, double reps, double aeps)
    private static native void fitLine_0(long points_nativeObj, long line_nativeObj, int distType, double param, double reps, double aeps);

    // C++:  int floodFill(Mat& image, Mat& mask, Point seedPoint, Scalar newVal, Rect* rect = 0, Scalar loDiff = Scalar(), Scalar upDiff = Scalar(), int flags = 4)
    private static native int floodFill_0(long image_nativeObj, long mask_nativeObj, double seedPoint_x, double seedPoint_y, double newVal_val0, double newVal_val1, double newVal_val2, double newVal_val3, double[] rect_out, double loDiff_val0, double loDiff_val1, double loDiff_val2, double loDiff_val3, double upDiff_val0, double upDiff_val1, double upDiff_val2, double upDiff_val3, int flags);
    private static native int floodFill_1(long image_nativeObj, long mask_nativeObj, double seedPoint_x, double seedPoint_y, double newVal_val0, double newVal_val1, double newVal_val2, double newVal_val3);

    // C++:  Mat getAffineTransform(vector_Point2f src, vector_Point2f dst)
    private static native long getAffineTransform_0(long src_mat_nativeObj, long dst_mat_nativeObj);

    // C++:  Mat getDefaultNewCameraMatrix(Mat cameraMatrix, Size imgsize = Size(), bool centerPrincipalPoint = false)
    private static native long getDefaultNewCameraMatrix_0(long cameraMatrix_nativeObj, double imgsize_width, double imgsize_height, boolean centerPrincipalPoint);
    private static native long getDefaultNewCameraMatrix_1(long cameraMatrix_nativeObj);

    // C++:  void getDerivKernels(Mat& kx, Mat& ky, int dx, int dy, int ksize, bool normalize = false, int ktype = CV_32F)
    private static native void getDerivKernels_0(long kx_nativeObj, long ky_nativeObj, int dx, int dy, int ksize, boolean normalize, int ktype);
    private static native void getDerivKernels_1(long kx_nativeObj, long ky_nativeObj, int dx, int dy, int ksize);

    // C++:  Mat getGaborKernel(Size ksize, double sigma, double theta, double lambd, double gamma, double psi = CV_PI*0.5, int ktype = CV_64F)
    private static native long getGaborKernel_0(double ksize_width, double ksize_height, double sigma, double theta, double lambd, double gamma, double psi, int ktype);
    private static native long getGaborKernel_1(double ksize_width, double ksize_height, double sigma, double theta, double lambd, double gamma);

    // C++:  Mat getGaussianKernel(int ksize, double sigma, int ktype = CV_64F)
    private static native long getGaussianKernel_0(int ksize, double sigma, int ktype);
    private static native long getGaussianKernel_1(int ksize, double sigma);

    // C++:  Mat getPerspectiveTransform(Mat src, Mat dst)
    private static native long getPerspectiveTransform_0(long src_nativeObj, long dst_nativeObj);

    // C++:  void getRectSubPix(Mat image, Size patchSize, Point2f center, Mat& patch, int patchType = -1)
    private static native void getRectSubPix_0(long image_nativeObj, double patchSize_width, double patchSize_height, double center_x, double center_y, long patch_nativeObj, int patchType);
    private static native void getRectSubPix_1(long image_nativeObj, double patchSize_width, double patchSize_height, double center_x, double center_y, long patch_nativeObj);

    // C++:  Mat getRotationMatrix2D(Point2f center, double angle, double scale)
    private static native long getRotationMatrix2D_0(double center_x, double center_y, double angle, double scale);

    // C++:  Mat getStructuringElement(int shape, Size ksize, Point anchor = Point(-1,-1))
    private static native long getStructuringElement_0(int shape, double ksize_width, double ksize_height, double anchor_x, double anchor_y);
    private static native long getStructuringElement_1(int shape, double ksize_width, double ksize_height);

    // C++:  void goodFeaturesToTrack(Mat image, vector_Point& corners, int maxCorners, double qualityLevel, double minDistance, Mat mask = Mat(), int blockSize = 3, bool useHarrisDetector = false, double k = 0.04)
    private static native void goodFeaturesToTrack_0(long image_nativeObj, long corners_mat_nativeObj, int maxCorners, double qualityLevel, double minDistance, long mask_nativeObj, int blockSize, boolean useHarrisDetector, double k);
    private static native void goodFeaturesToTrack_1(long image_nativeObj, long corners_mat_nativeObj, int maxCorners, double qualityLevel, double minDistance);

    // C++:  void grabCut(Mat img, Mat& mask, Rect rect, Mat& bgdModel, Mat& fgdModel, int iterCount, int mode = GC_EVAL)
    private static native void grabCut_0(long img_nativeObj, long mask_nativeObj, int rect_x, int rect_y, int rect_width, int rect_height, long bgdModel_nativeObj, long fgdModel_nativeObj, int iterCount, int mode);
    private static native void grabCut_1(long img_nativeObj, long mask_nativeObj, int rect_x, int rect_y, int rect_width, int rect_height, long bgdModel_nativeObj, long fgdModel_nativeObj, int iterCount);

    // C++:  void initUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat R, Mat newCameraMatrix, Size size, int m1type, Mat& map1, Mat& map2)
    private static native void initUndistortRectifyMap_0(long cameraMatrix_nativeObj, long distCoeffs_nativeObj, long R_nativeObj, long newCameraMatrix_nativeObj, double size_width, double size_height, int m1type, long map1_nativeObj, long map2_nativeObj);

    // C++:  float initWideAngleProjMap(Mat cameraMatrix, Mat distCoeffs, Size imageSize, int destImageWidth, int m1type, Mat& map1, Mat& map2, int projType = PROJ_SPHERICAL_EQRECT, double alpha = 0)
    private static native float initWideAngleProjMap_0(long cameraMatrix_nativeObj, long distCoeffs_nativeObj, double imageSize_width, double imageSize_height, int destImageWidth, int m1type, long map1_nativeObj, long map2_nativeObj, int projType, double alpha);
    private static native float initWideAngleProjMap_1(long cameraMatrix_nativeObj, long distCoeffs_nativeObj, double imageSize_width, double imageSize_height, int destImageWidth, int m1type, long map1_nativeObj, long map2_nativeObj);

    // C++:  void integral(Mat src, Mat& sum, int sdepth = -1)
    private static native void integral_0(long src_nativeObj, long sum_nativeObj, int sdepth);
    private static native void integral_1(long src_nativeObj, long sum_nativeObj);

    // C++:  void integral(Mat src, Mat& sum, Mat& sqsum, int sdepth = -1)
    private static native void integral2_0(long src_nativeObj, long sum_nativeObj, long sqsum_nativeObj, int sdepth);
    private static native void integral2_1(long src_nativeObj, long sum_nativeObj, long sqsum_nativeObj);

    // C++:  void integral(Mat src, Mat& sum, Mat& sqsum, Mat& tilted, int sdepth = -1)
    private static native void integral3_0(long src_nativeObj, long sum_nativeObj, long sqsum_nativeObj, long tilted_nativeObj, int sdepth);
    private static native void integral3_1(long src_nativeObj, long sum_nativeObj, long sqsum_nativeObj, long tilted_nativeObj);

    // C++:  float intersectConvexConvex(Mat _p1, Mat _p2, Mat& _p12, bool handleNested = true)
    private static native float intersectConvexConvex_0(long _p1_nativeObj, long _p2_nativeObj, long _p12_nativeObj, boolean handleNested);
    private static native float intersectConvexConvex_1(long _p1_nativeObj, long _p2_nativeObj, long _p12_nativeObj);

    // C++:  void invertAffineTransform(Mat M, Mat& iM)
    private static native void invertAffineTransform_0(long M_nativeObj, long iM_nativeObj);

    // C++:  bool isContourConvex(vector_Point contour)
    private static native boolean isContourConvex_0(long contour_mat_nativeObj);

    // C++:  double matchShapes(Mat contour1, Mat contour2, int method, double parameter)
    private static native double matchShapes_0(long contour1_nativeObj, long contour2_nativeObj, int method, double parameter);

    // C++:  void matchTemplate(Mat image, Mat templ, Mat& result, int method)
    private static native void matchTemplate_0(long image_nativeObj, long templ_nativeObj, long result_nativeObj, int method);

    // C++:  void medianBlur(Mat src, Mat& dst, int ksize)
    private static native void medianBlur_0(long src_nativeObj, long dst_nativeObj, int ksize);

    // C++:  RotatedRect minAreaRect(vector_Point2f points)
    private static native double[] minAreaRect_0(long points_mat_nativeObj);

    // C++:  void minEnclosingCircle(vector_Point2f points, Point2f& center, float& radius)
    private static native void minEnclosingCircle_0(long points_mat_nativeObj, double[] center_out, double[] radius_out);

    // C++:  Moments moments(Mat array, bool binaryImage = false)
    private static native long moments_0(long array_nativeObj, boolean binaryImage);
    private static native long moments_1(long array_nativeObj);

    // C++:  void morphologyEx(Mat src, Mat& dst, int op, Mat kernel, Point anchor = Point(-1,-1), int iterations = 1, int borderType = BORDER_CONSTANT, Scalar borderValue = morphologyDefaultBorderValue())
    private static native void morphologyEx_0(long src_nativeObj, long dst_nativeObj, int op, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations, int borderType, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void morphologyEx_1(long src_nativeObj, long dst_nativeObj, int op, long kernel_nativeObj, double anchor_x, double anchor_y, int iterations);
    private static native void morphologyEx_2(long src_nativeObj, long dst_nativeObj, int op, long kernel_nativeObj);

    // C++:  Point2d phaseCorrelate(Mat src1, Mat src2, Mat window = Mat())
    private static native double[] phaseCorrelate_0(long src1_nativeObj, long src2_nativeObj, long window_nativeObj);
    private static native double[] phaseCorrelate_1(long src1_nativeObj, long src2_nativeObj);

    // C++:  Point2d phaseCorrelateRes(Mat src1, Mat src2, Mat window, double* response = 0)
    private static native double[] phaseCorrelateRes_0(long src1_nativeObj, long src2_nativeObj, long window_nativeObj, double[] response_out);
    private static native double[] phaseCorrelateRes_1(long src1_nativeObj, long src2_nativeObj, long window_nativeObj);

    // C++:  double pointPolygonTest(vector_Point2f contour, Point2f pt, bool measureDist)
    private static native double pointPolygonTest_0(long contour_mat_nativeObj, double pt_x, double pt_y, boolean measureDist);

    // C++:  void preCornerDetect(Mat src, Mat& dst, int ksize, int borderType = BORDER_DEFAULT)
    private static native void preCornerDetect_0(long src_nativeObj, long dst_nativeObj, int ksize, int borderType);
    private static native void preCornerDetect_1(long src_nativeObj, long dst_nativeObj, int ksize);

    // C++:  void pyrDown(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
    private static native void pyrDown_0(long src_nativeObj, long dst_nativeObj, double dstsize_width, double dstsize_height, int borderType);
    private static native void pyrDown_1(long src_nativeObj, long dst_nativeObj, double dstsize_width, double dstsize_height);
    private static native void pyrDown_2(long src_nativeObj, long dst_nativeObj);

    // C++:  void pyrMeanShiftFiltering(Mat src, Mat& dst, double sp, double sr, int maxLevel = 1, TermCriteria termcrit = TermCriteria( TermCriteria::MAX_ITER+TermCriteria::EPS,5,1))
    private static native void pyrMeanShiftFiltering_0(long src_nativeObj, long dst_nativeObj, double sp, double sr, int maxLevel, int termcrit_type, int termcrit_maxCount, double termcrit_epsilon);
    private static native void pyrMeanShiftFiltering_1(long src_nativeObj, long dst_nativeObj, double sp, double sr);

    // C++:  void pyrUp(Mat src, Mat& dst, Size dstsize = Size(), int borderType = BORDER_DEFAULT)
    private static native void pyrUp_0(long src_nativeObj, long dst_nativeObj, double dstsize_width, double dstsize_height, int borderType);
    private static native void pyrUp_1(long src_nativeObj, long dst_nativeObj, double dstsize_width, double dstsize_height);
    private static native void pyrUp_2(long src_nativeObj, long dst_nativeObj);

    // C++:  void remap(Mat src, Mat& dst, Mat map1, Mat map2, int interpolation, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    private static native void remap_0(long src_nativeObj, long dst_nativeObj, long map1_nativeObj, long map2_nativeObj, int interpolation, int borderMode, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void remap_1(long src_nativeObj, long dst_nativeObj, long map1_nativeObj, long map2_nativeObj, int interpolation);

    // C++:  void resize(Mat src, Mat& dst, Size dsize, double fx = 0, double fy = 0, int interpolation = INTER_LINEAR)
    private static native void resize_0(long src_nativeObj, long dst_nativeObj, double dsize_width, double dsize_height, double fx, double fy, int interpolation);
    private static native void resize_1(long src_nativeObj, long dst_nativeObj, double dsize_width, double dsize_height);

    // C++:  void sepFilter2D(Mat src, Mat& dst, int ddepth, Mat kernelX, Mat kernelY, Point anchor = Point(-1,-1), double delta = 0, int borderType = BORDER_DEFAULT)
    private static native void sepFilter2D_0(long src_nativeObj, long dst_nativeObj, int ddepth, long kernelX_nativeObj, long kernelY_nativeObj, double anchor_x, double anchor_y, double delta, int borderType);
    private static native void sepFilter2D_1(long src_nativeObj, long dst_nativeObj, int ddepth, long kernelX_nativeObj, long kernelY_nativeObj, double anchor_x, double anchor_y, double delta);
    private static native void sepFilter2D_2(long src_nativeObj, long dst_nativeObj, int ddepth, long kernelX_nativeObj, long kernelY_nativeObj);

    // C++:  double threshold(Mat src, Mat& dst, double thresh, double maxval, int type)
    private static native double threshold_0(long src_nativeObj, long dst_nativeObj, double thresh, double maxval, int type);

    // C++:  void undistort(Mat src, Mat& dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix = Mat())
    private static native void undistort_0(long src_nativeObj, long dst_nativeObj, long cameraMatrix_nativeObj, long distCoeffs_nativeObj, long newCameraMatrix_nativeObj);
    private static native void undistort_1(long src_nativeObj, long dst_nativeObj, long cameraMatrix_nativeObj, long distCoeffs_nativeObj);

    // C++:  void undistortPoints(vector_Point2f src, vector_Point2f& dst, Mat cameraMatrix, Mat distCoeffs, Mat R = Mat(), Mat P = Mat())
    private static native void undistortPoints_0(long src_mat_nativeObj, long dst_mat_nativeObj, long cameraMatrix_nativeObj, long distCoeffs_nativeObj, long R_nativeObj, long P_nativeObj);
    private static native void undistortPoints_1(long src_mat_nativeObj, long dst_mat_nativeObj, long cameraMatrix_nativeObj, long distCoeffs_nativeObj);

    // C++:  void warpAffine(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    private static native void warpAffine_0(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height, int flags, int borderMode, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void warpAffine_1(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height, int flags);
    private static native void warpAffine_2(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height);

    // C++:  void warpPerspective(Mat src, Mat& dst, Mat M, Size dsize, int flags = INTER_LINEAR, int borderMode = BORDER_CONSTANT, Scalar borderValue = Scalar())
    private static native void warpPerspective_0(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height, int flags, int borderMode, double borderValue_val0, double borderValue_val1, double borderValue_val2, double borderValue_val3);
    private static native void warpPerspective_1(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height, int flags);
    private static native void warpPerspective_2(long src_nativeObj, long dst_nativeObj, long M_nativeObj, double dsize_width, double dsize_height);

    // C++:  void watershed(Mat image, Mat& markers)
    private static native void watershed_0(long image_nativeObj, long markers_nativeObj);

}

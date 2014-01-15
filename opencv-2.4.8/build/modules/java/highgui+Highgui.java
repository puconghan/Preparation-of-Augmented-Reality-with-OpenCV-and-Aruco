
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.highgui;

import java.lang.String;
import org.opencv.core.Mat;
import org.opencv.core.MatOfByte;
import org.opencv.core.MatOfInt;

public class Highgui {

    public static final int
            CV_FONT_LIGHT = 25,
            CV_FONT_NORMAL = 50,
            CV_FONT_DEMIBOLD = 63,
            CV_FONT_BOLD = 75,
            CV_FONT_BLACK = 87,
            CV_STYLE_NORMAL = 0,
            CV_STYLE_ITALIC = 1,
            CV_STYLE_OBLIQUE = 2,
            CV_LOAD_IMAGE_UNCHANGED = -1,
            CV_LOAD_IMAGE_GRAYSCALE = 0,
            CV_LOAD_IMAGE_COLOR = 1,
            CV_LOAD_IMAGE_ANYDEPTH = 2,
            CV_LOAD_IMAGE_ANYCOLOR = 4,
            CV_IMWRITE_JPEG_QUALITY = 1,
            CV_IMWRITE_PNG_COMPRESSION = 16,
            CV_IMWRITE_PNG_STRATEGY = 17,
            CV_IMWRITE_PNG_BILEVEL = 18,
            CV_IMWRITE_PNG_STRATEGY_DEFAULT = 0,
            CV_IMWRITE_PNG_STRATEGY_FILTERED = 1,
            CV_IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY = 2,
            CV_IMWRITE_PNG_STRATEGY_RLE = 3,
            CV_IMWRITE_PNG_STRATEGY_FIXED = 4,
            CV_IMWRITE_PXM_BINARY = 32,
            CV_CVTIMG_FLIP = 1,
            CV_CVTIMG_SWAP_RB = 2,
            CV_CAP_MSMF = 1400,
            CV_CAP_ANDROID = 1000,
            CV_CAP_ANDROID_BACK = CV_CAP_ANDROID+99,
            CV_CAP_ANDROID_FRONT = CV_CAP_ANDROID+98,
            CV_CAP_XIAPI = 1100,
            CV_CAP_AVFOUNDATION = 1200,
            CV_CAP_GIGANETIX = 1300,
            CV_CAP_PROP_FRAME_WIDTH = 3,
            CV_CAP_PROP_FRAME_HEIGHT = 4,
            CV_CAP_PROP_ZOOM = 27,
            CV_CAP_PROP_FOCUS = 28,
            CV_CAP_PROP_GUID = 29,
            CV_CAP_PROP_ISO_SPEED = 30,
            CV_CAP_PROP_BACKLIGHT = 32,
            CV_CAP_PROP_PAN = 33,
            CV_CAP_PROP_TILT = 34,
            CV_CAP_PROP_ROLL = 35,
            CV_CAP_PROP_IRIS = 36,
            CV_CAP_PROP_SETTINGS = 37,
            CV_CAP_PROP_AUTOGRAB = 1024,
            CV_CAP_PROP_PREVIEW_FORMAT = 1026,
            CV_CAP_PROP_XI_DOWNSAMPLING = 400,
            CV_CAP_PROP_XI_DATA_FORMAT = 401,
            CV_CAP_PROP_XI_OFFSET_X = 402,
            CV_CAP_PROP_XI_OFFSET_Y = 403,
            CV_CAP_PROP_XI_TRG_SOURCE = 404,
            CV_CAP_PROP_XI_TRG_SOFTWARE = 405,
            CV_CAP_PROP_XI_GPI_SELECTOR = 406,
            CV_CAP_PROP_XI_GPI_MODE = 407,
            CV_CAP_PROP_XI_GPI_LEVEL = 408,
            CV_CAP_PROP_XI_GPO_SELECTOR = 409,
            CV_CAP_PROP_XI_GPO_MODE = 410,
            CV_CAP_PROP_XI_LED_SELECTOR = 411,
            CV_CAP_PROP_XI_LED_MODE = 412,
            CV_CAP_PROP_XI_MANUAL_WB = 413,
            CV_CAP_PROP_XI_AUTO_WB = 414,
            CV_CAP_PROP_XI_AEAG = 415,
            CV_CAP_PROP_XI_EXP_PRIORITY = 416,
            CV_CAP_PROP_XI_AE_MAX_LIMIT = 417,
            CV_CAP_PROP_XI_AG_MAX_LIMIT = 418,
            CV_CAP_PROP_XI_AEAG_LEVEL = 419,
            CV_CAP_PROP_XI_TIMEOUT = 420,
            CV_CAP_PROP_ANDROID_FLASH_MODE = 8001,
            CV_CAP_PROP_ANDROID_FOCUS_MODE = 8002,
            CV_CAP_PROP_ANDROID_WHITE_BALANCE = 8003,
            CV_CAP_PROP_ANDROID_ANTIBANDING = 8004,
            CV_CAP_PROP_ANDROID_FOCAL_LENGTH = 8005,
            CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_NEAR = 8006,
            CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_OPTIMAL = 8007,
            CV_CAP_PROP_ANDROID_FOCUS_DISTANCE_FAR = 8008,
            CV_CAP_PROP_IOS_DEVICE_FOCUS = 9001,
            CV_CAP_PROP_IOS_DEVICE_EXPOSURE = 9002,
            CV_CAP_PROP_IOS_DEVICE_FLASH = 9003,
            CV_CAP_PROP_IOS_DEVICE_WHITEBALANCE = 9004,
            CV_CAP_PROP_IOS_DEVICE_TORCH = 9005,
            CV_CAP_PROP_GIGA_FRAME_OFFSET_X = 10001,
            CV_CAP_PROP_GIGA_FRAME_OFFSET_Y = 10002,
            CV_CAP_PROP_GIGA_FRAME_WIDTH_MAX = 10003,
            CV_CAP_PROP_GIGA_FRAME_HEIGH_MAX = 10004,
            CV_CAP_PROP_GIGA_FRAME_SENS_WIDTH = 10005,
            CV_CAP_PROP_GIGA_FRAME_SENS_HEIGH = 10006,
            CV_CAP_PROP_INTELPERC_PROFILE_COUNT = 11001,
            CV_CAP_PROP_INTELPERC_PROFILE_IDX = 11002,
            CV_CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE = 11003,
            CV_CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE = 11004,
            CV_CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD = 11005,
            CV_CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ = 11006,
            CV_CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT = 11007,
            CV_CAP_ANDROID_COLOR_FRAME_BGR = 0,
            CV_CAP_ANDROID_COLOR_FRAME = CV_CAP_ANDROID_COLOR_FRAME_BGR,
            CV_CAP_ANDROID_GREY_FRAME = 1,
            CV_CAP_ANDROID_COLOR_FRAME_RGB = 2,
            CV_CAP_ANDROID_COLOR_FRAME_BGRA = 3,
            CV_CAP_ANDROID_COLOR_FRAME_RGBA = 4,
            CV_CAP_ANDROID_FLASH_MODE_AUTO = 0,
            CV_CAP_ANDROID_FLASH_MODE_OFF = 0+1,
            CV_CAP_ANDROID_FLASH_MODE_ON = 0+2,
            CV_CAP_ANDROID_FLASH_MODE_RED_EYE = 0+3,
            CV_CAP_ANDROID_FLASH_MODE_TORCH = 0+4,
            CV_CAP_ANDROID_FOCUS_MODE_AUTO = 0,
            CV_CAP_ANDROID_FOCUS_MODE_CONTINUOUS_VIDEO = 0+1,
            CV_CAP_ANDROID_FOCUS_MODE_EDOF = 0+2,
            CV_CAP_ANDROID_FOCUS_MODE_FIXED = 0+3,
            CV_CAP_ANDROID_FOCUS_MODE_INFINITY = 0+4,
            CV_CAP_ANDROID_FOCUS_MODE_MACRO = 0+5,
            CV_CAP_ANDROID_WHITE_BALANCE_AUTO = 0,
            CV_CAP_ANDROID_WHITE_BALANCE_CLOUDY_DAYLIGHT = 0+1,
            CV_CAP_ANDROID_WHITE_BALANCE_DAYLIGHT = 0+2,
            CV_CAP_ANDROID_WHITE_BALANCE_FLUORESCENT = 0+3,
            CV_CAP_ANDROID_WHITE_BALANCE_INCANDESCENT = 0+4,
            CV_CAP_ANDROID_WHITE_BALANCE_SHADE = 0+5,
            CV_CAP_ANDROID_WHITE_BALANCE_TWILIGHT = 0+6,
            CV_CAP_ANDROID_WHITE_BALANCE_WARM_FLUORESCENT = 0+7,
            CV_CAP_ANDROID_ANTIBANDING_50HZ = 0,
            CV_CAP_ANDROID_ANTIBANDING_60HZ = 0+1,
            CV_CAP_ANDROID_ANTIBANDING_AUTO = 0+2,
            CV_CAP_ANDROID_ANTIBANDING_OFF = 0+3,
            IMREAD_UNCHANGED = -1,
            IMREAD_GRAYSCALE = 0,
            IMREAD_COLOR = 1,
            IMREAD_ANYDEPTH = 2,
            IMREAD_ANYCOLOR = 4,
            IMWRITE_JPEG_QUALITY = 1,
            IMWRITE_PNG_COMPRESSION = 16,
            IMWRITE_PNG_STRATEGY = 17,
            IMWRITE_PNG_BILEVEL = 18,
            IMWRITE_PNG_STRATEGY_DEFAULT = 0,
            IMWRITE_PNG_STRATEGY_FILTERED = 1,
            IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY = 2,
            IMWRITE_PNG_STRATEGY_RLE = 3,
            IMWRITE_PNG_STRATEGY_FIXED = 4,
            IMWRITE_PXM_BINARY = 32;


    //
    // C++:  Mat imdecode(Mat buf, int flags)
    //

    //javadoc: imdecode(buf, flags)
    public static Mat imdecode(Mat buf, int flags)
    {
        
        Mat retVal = new Mat(imdecode_0(buf.nativeObj, flags));
        
        return retVal;
    }


    //
    // C++:  bool imencode(string ext, Mat img, vector_uchar& buf, vector_int params = vector<int>())
    //

    //javadoc: imencode(ext, img, buf, params)
    public static boolean imencode(String ext, Mat img, MatOfByte buf, MatOfInt params)
    {
        Mat buf_mat = buf;
        Mat params_mat = params;
        boolean retVal = imencode_0(ext, img.nativeObj, buf_mat.nativeObj, params_mat.nativeObj);
        
        return retVal;
    }

    //javadoc: imencode(ext, img, buf)
    public static boolean imencode(String ext, Mat img, MatOfByte buf)
    {
        Mat buf_mat = buf;
        boolean retVal = imencode_1(ext, img.nativeObj, buf_mat.nativeObj);
        
        return retVal;
    }


    //
    // C++:  Mat imread(string filename, int flags = 1)
    //

    //javadoc: imread(filename, flags)
    public static Mat imread(String filename, int flags)
    {
        
        Mat retVal = new Mat(imread_0(filename, flags));
        
        return retVal;
    }

    //javadoc: imread(filename)
    public static Mat imread(String filename)
    {
        
        Mat retVal = new Mat(imread_1(filename));
        
        return retVal;
    }


    //
    // C++:  bool imwrite(string filename, Mat img, vector_int params = vector<int>())
    //

    //javadoc: imwrite(filename, img, params)
    public static boolean imwrite(String filename, Mat img, MatOfInt params)
    {
        Mat params_mat = params;
        boolean retVal = imwrite_0(filename, img.nativeObj, params_mat.nativeObj);
        
        return retVal;
    }

    //javadoc: imwrite(filename, img)
    public static boolean imwrite(String filename, Mat img)
    {
        
        boolean retVal = imwrite_1(filename, img.nativeObj);
        
        return retVal;
    }




    // C++:  Mat imdecode(Mat buf, int flags)
    private static native long imdecode_0(long buf_nativeObj, int flags);

    // C++:  bool imencode(string ext, Mat img, vector_uchar& buf, vector_int params = vector<int>())
    private static native boolean imencode_0(String ext, long img_nativeObj, long buf_mat_nativeObj, long params_mat_nativeObj);
    private static native boolean imencode_1(String ext, long img_nativeObj, long buf_mat_nativeObj);

    // C++:  Mat imread(string filename, int flags = 1)
    private static native long imread_0(String filename, int flags);
    private static native long imread_1(String filename);

    // C++:  bool imwrite(string filename, Mat img, vector_int params = vector<int>())
    private static native boolean imwrite_0(String filename, long img_nativeObj, long params_mat_nativeObj);
    private static native boolean imwrite_1(String filename, long img_nativeObj);

}

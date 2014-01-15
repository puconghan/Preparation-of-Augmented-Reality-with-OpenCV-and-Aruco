
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.calib3d;

import org.opencv.core.Mat;

// C++: class StereoBM
//javadoc: StereoBM
public class StereoBM {

    protected final long nativeObj;
    protected StereoBM(long addr) { nativeObj = addr; }


    public static final int
            PREFILTER_NORMALIZED_RESPONSE = 0,
            PREFILTER_XSOBEL = 1,
            BASIC_PRESET = 0,
            FISH_EYE_PRESET = 1,
            NARROW_PRESET = 2;


    //
    // C++:   StereoBM::StereoBM()
    //

    //javadoc: StereoBM::StereoBM()
    public   StereoBM()
    {
        
        nativeObj = StereoBM_0();
        
        return;
    }


    //
    // C++:   StereoBM::StereoBM(int preset, int ndisparities = 0, int SADWindowSize = 21)
    //

    //javadoc: StereoBM::StereoBM(preset, ndisparities, SADWindowSize)
    public   StereoBM(int preset, int ndisparities, int SADWindowSize)
    {
        
        nativeObj = StereoBM_1(preset, ndisparities, SADWindowSize);
        
        return;
    }

    //javadoc: StereoBM::StereoBM(preset)
    public   StereoBM(int preset)
    {
        
        nativeObj = StereoBM_2(preset);
        
        return;
    }


    //
    // C++:  void StereoBM::operator ()(Mat left, Mat right, Mat& disparity, int disptype = CV_16S)
    //

    //javadoc: StereoBM::operator ()(left, right, disparity, disptype)
    public  void compute(Mat left, Mat right, Mat disparity, int disptype)
    {
        
        compute_0(nativeObj, left.nativeObj, right.nativeObj, disparity.nativeObj, disptype);
        
        return;
    }

    //javadoc: StereoBM::operator ()(left, right, disparity)
    public  void compute(Mat left, Mat right, Mat disparity)
    {
        
        compute_1(nativeObj, left.nativeObj, right.nativeObj, disparity.nativeObj);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   StereoBM::StereoBM()
    private static native long StereoBM_0();

    // C++:   StereoBM::StereoBM(int preset, int ndisparities = 0, int SADWindowSize = 21)
    private static native long StereoBM_1(int preset, int ndisparities, int SADWindowSize);
    private static native long StereoBM_2(int preset);

    // C++:  void StereoBM::operator ()(Mat left, Mat right, Mat& disparity, int disptype = CV_16S)
    private static native void compute_0(long nativeObj, long left_nativeObj, long right_nativeObj, long disparity_nativeObj, int disptype);
    private static native void compute_1(long nativeObj, long left_nativeObj, long right_nativeObj, long disparity_nativeObj);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}

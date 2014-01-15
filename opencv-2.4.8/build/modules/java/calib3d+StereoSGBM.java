
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.calib3d;

import org.opencv.core.Mat;

// C++: class StereoSGBM
//javadoc: StereoSGBM
public class StereoSGBM {

    protected final long nativeObj;
    protected StereoSGBM(long addr) { nativeObj = addr; }


    public static final int
            DISP_SHIFT = 4,
            DISP_SCALE = (1<<DISP_SHIFT);


    //
    // C++:   StereoSGBM::StereoSGBM()
    //

    //javadoc: StereoSGBM::StereoSGBM()
    public   StereoSGBM()
    {
        
        nativeObj = StereoSGBM_0();
        
        return;
    }


    //
    // C++:   StereoSGBM::StereoSGBM(int minDisparity, int numDisparities, int SADWindowSize, int P1 = 0, int P2 = 0, int disp12MaxDiff = 0, int preFilterCap = 0, int uniquenessRatio = 0, int speckleWindowSize = 0, int speckleRange = 0, bool fullDP = false)
    //

    //javadoc: StereoSGBM::StereoSGBM(minDisparity, numDisparities, SADWindowSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, fullDP)
    public   StereoSGBM(int minDisparity, int numDisparities, int SADWindowSize, int P1, int P2, int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, int speckleRange, boolean fullDP)
    {
        
        nativeObj = StereoSGBM_1(minDisparity, numDisparities, SADWindowSize, P1, P2, disp12MaxDiff, preFilterCap, uniquenessRatio, speckleWindowSize, speckleRange, fullDP);
        
        return;
    }

    //javadoc: StereoSGBM::StereoSGBM(minDisparity, numDisparities, SADWindowSize)
    public   StereoSGBM(int minDisparity, int numDisparities, int SADWindowSize)
    {
        
        nativeObj = StereoSGBM_2(minDisparity, numDisparities, SADWindowSize);
        
        return;
    }


    //
    // C++:  void StereoSGBM::operator ()(Mat left, Mat right, Mat& disp)
    //

    //javadoc: StereoSGBM::operator ()(left, right, disp)
    public  void compute(Mat left, Mat right, Mat disp)
    {
        
        compute_0(nativeObj, left.nativeObj, right.nativeObj, disp.nativeObj);
        
        return;
    }


    //
    // C++: int StereoSGBM::minDisparity
    //

    //javadoc: StereoSGBM::get_minDisparity()
    public  int get_minDisparity()
    {
        
        int retVal = get_minDisparity_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::minDisparity
    //

    //javadoc: StereoSGBM::set_minDisparity(minDisparity)
    public  void set_minDisparity(int minDisparity)
    {
        
        set_minDisparity_0(nativeObj, minDisparity);
        
        return;
    }


    //
    // C++: int StereoSGBM::numberOfDisparities
    //

    //javadoc: StereoSGBM::get_numberOfDisparities()
    public  int get_numberOfDisparities()
    {
        
        int retVal = get_numberOfDisparities_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::numberOfDisparities
    //

    //javadoc: StereoSGBM::set_numberOfDisparities(numberOfDisparities)
    public  void set_numberOfDisparities(int numberOfDisparities)
    {
        
        set_numberOfDisparities_0(nativeObj, numberOfDisparities);
        
        return;
    }


    //
    // C++: int StereoSGBM::SADWindowSize
    //

    //javadoc: StereoSGBM::get_SADWindowSize()
    public  int get_SADWindowSize()
    {
        
        int retVal = get_SADWindowSize_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::SADWindowSize
    //

    //javadoc: StereoSGBM::set_SADWindowSize(SADWindowSize)
    public  void set_SADWindowSize(int SADWindowSize)
    {
        
        set_SADWindowSize_0(nativeObj, SADWindowSize);
        
        return;
    }


    //
    // C++: int StereoSGBM::preFilterCap
    //

    //javadoc: StereoSGBM::get_preFilterCap()
    public  int get_preFilterCap()
    {
        
        int retVal = get_preFilterCap_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::preFilterCap
    //

    //javadoc: StereoSGBM::set_preFilterCap(preFilterCap)
    public  void set_preFilterCap(int preFilterCap)
    {
        
        set_preFilterCap_0(nativeObj, preFilterCap);
        
        return;
    }


    //
    // C++: int StereoSGBM::uniquenessRatio
    //

    //javadoc: StereoSGBM::get_uniquenessRatio()
    public  int get_uniquenessRatio()
    {
        
        int retVal = get_uniquenessRatio_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::uniquenessRatio
    //

    //javadoc: StereoSGBM::set_uniquenessRatio(uniquenessRatio)
    public  void set_uniquenessRatio(int uniquenessRatio)
    {
        
        set_uniquenessRatio_0(nativeObj, uniquenessRatio);
        
        return;
    }


    //
    // C++: int StereoSGBM::P1
    //

    //javadoc: StereoSGBM::get_P1()
    public  int get_P1()
    {
        
        int retVal = get_P1_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::P1
    //

    //javadoc: StereoSGBM::set_P1(P1)
    public  void set_P1(int P1)
    {
        
        set_P1_0(nativeObj, P1);
        
        return;
    }


    //
    // C++: int StereoSGBM::P2
    //

    //javadoc: StereoSGBM::get_P2()
    public  int get_P2()
    {
        
        int retVal = get_P2_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::P2
    //

    //javadoc: StereoSGBM::set_P2(P2)
    public  void set_P2(int P2)
    {
        
        set_P2_0(nativeObj, P2);
        
        return;
    }


    //
    // C++: int StereoSGBM::speckleWindowSize
    //

    //javadoc: StereoSGBM::get_speckleWindowSize()
    public  int get_speckleWindowSize()
    {
        
        int retVal = get_speckleWindowSize_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::speckleWindowSize
    //

    //javadoc: StereoSGBM::set_speckleWindowSize(speckleWindowSize)
    public  void set_speckleWindowSize(int speckleWindowSize)
    {
        
        set_speckleWindowSize_0(nativeObj, speckleWindowSize);
        
        return;
    }


    //
    // C++: int StereoSGBM::speckleRange
    //

    //javadoc: StereoSGBM::get_speckleRange()
    public  int get_speckleRange()
    {
        
        int retVal = get_speckleRange_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::speckleRange
    //

    //javadoc: StereoSGBM::set_speckleRange(speckleRange)
    public  void set_speckleRange(int speckleRange)
    {
        
        set_speckleRange_0(nativeObj, speckleRange);
        
        return;
    }


    //
    // C++: int StereoSGBM::disp12MaxDiff
    //

    //javadoc: StereoSGBM::get_disp12MaxDiff()
    public  int get_disp12MaxDiff()
    {
        
        int retVal = get_disp12MaxDiff_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::disp12MaxDiff
    //

    //javadoc: StereoSGBM::set_disp12MaxDiff(disp12MaxDiff)
    public  void set_disp12MaxDiff(int disp12MaxDiff)
    {
        
        set_disp12MaxDiff_0(nativeObj, disp12MaxDiff);
        
        return;
    }


    //
    // C++: bool StereoSGBM::fullDP
    //

    //javadoc: StereoSGBM::get_fullDP()
    public  boolean get_fullDP()
    {
        
        boolean retVal = get_fullDP_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoSGBM::fullDP
    //

    //javadoc: StereoSGBM::set_fullDP(fullDP)
    public  void set_fullDP(boolean fullDP)
    {
        
        set_fullDP_0(nativeObj, fullDP);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   StereoSGBM::StereoSGBM()
    private static native long StereoSGBM_0();

    // C++:   StereoSGBM::StereoSGBM(int minDisparity, int numDisparities, int SADWindowSize, int P1 = 0, int P2 = 0, int disp12MaxDiff = 0, int preFilterCap = 0, int uniquenessRatio = 0, int speckleWindowSize = 0, int speckleRange = 0, bool fullDP = false)
    private static native long StereoSGBM_1(int minDisparity, int numDisparities, int SADWindowSize, int P1, int P2, int disp12MaxDiff, int preFilterCap, int uniquenessRatio, int speckleWindowSize, int speckleRange, boolean fullDP);
    private static native long StereoSGBM_2(int minDisparity, int numDisparities, int SADWindowSize);

    // C++:  void StereoSGBM::operator ()(Mat left, Mat right, Mat& disp)
    private static native void compute_0(long nativeObj, long left_nativeObj, long right_nativeObj, long disp_nativeObj);

    // C++: int StereoSGBM::minDisparity
    private static native int get_minDisparity_0(long nativeObj);

    // C++: void StereoSGBM::minDisparity
    private static native void set_minDisparity_0(long nativeObj, int minDisparity);

    // C++: int StereoSGBM::numberOfDisparities
    private static native int get_numberOfDisparities_0(long nativeObj);

    // C++: void StereoSGBM::numberOfDisparities
    private static native void set_numberOfDisparities_0(long nativeObj, int numberOfDisparities);

    // C++: int StereoSGBM::SADWindowSize
    private static native int get_SADWindowSize_0(long nativeObj);

    // C++: void StereoSGBM::SADWindowSize
    private static native void set_SADWindowSize_0(long nativeObj, int SADWindowSize);

    // C++: int StereoSGBM::preFilterCap
    private static native int get_preFilterCap_0(long nativeObj);

    // C++: void StereoSGBM::preFilterCap
    private static native void set_preFilterCap_0(long nativeObj, int preFilterCap);

    // C++: int StereoSGBM::uniquenessRatio
    private static native int get_uniquenessRatio_0(long nativeObj);

    // C++: void StereoSGBM::uniquenessRatio
    private static native void set_uniquenessRatio_0(long nativeObj, int uniquenessRatio);

    // C++: int StereoSGBM::P1
    private static native int get_P1_0(long nativeObj);

    // C++: void StereoSGBM::P1
    private static native void set_P1_0(long nativeObj, int P1);

    // C++: int StereoSGBM::P2
    private static native int get_P2_0(long nativeObj);

    // C++: void StereoSGBM::P2
    private static native void set_P2_0(long nativeObj, int P2);

    // C++: int StereoSGBM::speckleWindowSize
    private static native int get_speckleWindowSize_0(long nativeObj);

    // C++: void StereoSGBM::speckleWindowSize
    private static native void set_speckleWindowSize_0(long nativeObj, int speckleWindowSize);

    // C++: int StereoSGBM::speckleRange
    private static native int get_speckleRange_0(long nativeObj);

    // C++: void StereoSGBM::speckleRange
    private static native void set_speckleRange_0(long nativeObj, int speckleRange);

    // C++: int StereoSGBM::disp12MaxDiff
    private static native int get_disp12MaxDiff_0(long nativeObj);

    // C++: void StereoSGBM::disp12MaxDiff
    private static native void set_disp12MaxDiff_0(long nativeObj, int disp12MaxDiff);

    // C++: bool StereoSGBM::fullDP
    private static native boolean get_fullDP_0(long nativeObj);

    // C++: void StereoSGBM::fullDP
    private static native void set_fullDP_0(long nativeObj, boolean fullDP);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}

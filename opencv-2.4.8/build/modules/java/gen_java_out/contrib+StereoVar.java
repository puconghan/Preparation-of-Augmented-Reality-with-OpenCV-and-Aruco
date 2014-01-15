
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.contrib;

import org.opencv.core.Mat;

// C++: class StereoVar
//javadoc: StereoVar
public class StereoVar {

    protected final long nativeObj;
    protected StereoVar(long addr) { nativeObj = addr; }


    public static final int
            USE_INITIAL_DISPARITY = 1,
            USE_EQUALIZE_HIST = 2,
            USE_SMART_ID = 4,
            USE_AUTO_PARAMS = 8,
            USE_MEDIAN_FILTERING = 16,
            CYCLE_O = 0,
            CYCLE_V = 1,
            PENALIZATION_TICHONOV = 0,
            PENALIZATION_CHARBONNIER = 1,
            PENALIZATION_PERONA_MALIK = 2;


    //
    // C++:   StereoVar::StereoVar()
    //

    //javadoc: StereoVar::StereoVar()
    public   StereoVar()
    {
        
        nativeObj = StereoVar_0();
        
        return;
    }


    //
    // C++:   StereoVar::StereoVar(int levels, double pyrScale, int nIt, int minDisp, int maxDisp, int poly_n, double poly_sigma, float fi, float lambda, int penalization, int cycle, int flags)
    //

    //javadoc: StereoVar::StereoVar(levels, pyrScale, nIt, minDisp, maxDisp, poly_n, poly_sigma, fi, lambda, penalization, cycle, flags)
    public   StereoVar(int levels, double pyrScale, int nIt, int minDisp, int maxDisp, int poly_n, double poly_sigma, float fi, float lambda, int penalization, int cycle, int flags)
    {
        
        nativeObj = StereoVar_1(levels, pyrScale, nIt, minDisp, maxDisp, poly_n, poly_sigma, fi, lambda, penalization, cycle, flags);
        
        return;
    }


    //
    // C++:  void StereoVar::operator ()(Mat left, Mat right, Mat& disp)
    //

    //javadoc: StereoVar::operator ()(left, right, disp)
    public  void compute(Mat left, Mat right, Mat disp)
    {
        
        compute_0(nativeObj, left.nativeObj, right.nativeObj, disp.nativeObj);
        
        return;
    }


    //
    // C++: int StereoVar::levels
    //

    //javadoc: StereoVar::get_levels()
    public  int get_levels()
    {
        
        int retVal = get_levels_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::levels
    //

    //javadoc: StereoVar::set_levels(levels)
    public  void set_levels(int levels)
    {
        
        set_levels_0(nativeObj, levels);
        
        return;
    }


    //
    // C++: double StereoVar::pyrScale
    //

    //javadoc: StereoVar::get_pyrScale()
    public  double get_pyrScale()
    {
        
        double retVal = get_pyrScale_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::pyrScale
    //

    //javadoc: StereoVar::set_pyrScale(pyrScale)
    public  void set_pyrScale(double pyrScale)
    {
        
        set_pyrScale_0(nativeObj, pyrScale);
        
        return;
    }


    //
    // C++: int StereoVar::nIt
    //

    //javadoc: StereoVar::get_nIt()
    public  int get_nIt()
    {
        
        int retVal = get_nIt_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::nIt
    //

    //javadoc: StereoVar::set_nIt(nIt)
    public  void set_nIt(int nIt)
    {
        
        set_nIt_0(nativeObj, nIt);
        
        return;
    }


    //
    // C++: int StereoVar::minDisp
    //

    //javadoc: StereoVar::get_minDisp()
    public  int get_minDisp()
    {
        
        int retVal = get_minDisp_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::minDisp
    //

    //javadoc: StereoVar::set_minDisp(minDisp)
    public  void set_minDisp(int minDisp)
    {
        
        set_minDisp_0(nativeObj, minDisp);
        
        return;
    }


    //
    // C++: int StereoVar::maxDisp
    //

    //javadoc: StereoVar::get_maxDisp()
    public  int get_maxDisp()
    {
        
        int retVal = get_maxDisp_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::maxDisp
    //

    //javadoc: StereoVar::set_maxDisp(maxDisp)
    public  void set_maxDisp(int maxDisp)
    {
        
        set_maxDisp_0(nativeObj, maxDisp);
        
        return;
    }


    //
    // C++: int StereoVar::poly_n
    //

    //javadoc: StereoVar::get_poly_n()
    public  int get_poly_n()
    {
        
        int retVal = get_poly_n_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::poly_n
    //

    //javadoc: StereoVar::set_poly_n(poly_n)
    public  void set_poly_n(int poly_n)
    {
        
        set_poly_n_0(nativeObj, poly_n);
        
        return;
    }


    //
    // C++: double StereoVar::poly_sigma
    //

    //javadoc: StereoVar::get_poly_sigma()
    public  double get_poly_sigma()
    {
        
        double retVal = get_poly_sigma_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::poly_sigma
    //

    //javadoc: StereoVar::set_poly_sigma(poly_sigma)
    public  void set_poly_sigma(double poly_sigma)
    {
        
        set_poly_sigma_0(nativeObj, poly_sigma);
        
        return;
    }


    //
    // C++: float StereoVar::fi
    //

    //javadoc: StereoVar::get_fi()
    public  float get_fi()
    {
        
        float retVal = get_fi_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::fi
    //

    //javadoc: StereoVar::set_fi(fi)
    public  void set_fi(float fi)
    {
        
        set_fi_0(nativeObj, fi);
        
        return;
    }


    //
    // C++: float StereoVar::lambda
    //

    //javadoc: StereoVar::get_lambda()
    public  float get_lambda()
    {
        
        float retVal = get_lambda_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::lambda
    //

    //javadoc: StereoVar::set_lambda(lambda)
    public  void set_lambda(float lambda)
    {
        
        set_lambda_0(nativeObj, lambda);
        
        return;
    }


    //
    // C++: int StereoVar::penalization
    //

    //javadoc: StereoVar::get_penalization()
    public  int get_penalization()
    {
        
        int retVal = get_penalization_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::penalization
    //

    //javadoc: StereoVar::set_penalization(penalization)
    public  void set_penalization(int penalization)
    {
        
        set_penalization_0(nativeObj, penalization);
        
        return;
    }


    //
    // C++: int StereoVar::cycle
    //

    //javadoc: StereoVar::get_cycle()
    public  int get_cycle()
    {
        
        int retVal = get_cycle_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::cycle
    //

    //javadoc: StereoVar::set_cycle(cycle)
    public  void set_cycle(int cycle)
    {
        
        set_cycle_0(nativeObj, cycle);
        
        return;
    }


    //
    // C++: int StereoVar::flags
    //

    //javadoc: StereoVar::get_flags()
    public  int get_flags()
    {
        
        int retVal = get_flags_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void StereoVar::flags
    //

    //javadoc: StereoVar::set_flags(flags)
    public  void set_flags(int flags)
    {
        
        set_flags_0(nativeObj, flags);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   StereoVar::StereoVar()
    private static native long StereoVar_0();

    // C++:   StereoVar::StereoVar(int levels, double pyrScale, int nIt, int minDisp, int maxDisp, int poly_n, double poly_sigma, float fi, float lambda, int penalization, int cycle, int flags)
    private static native long StereoVar_1(int levels, double pyrScale, int nIt, int minDisp, int maxDisp, int poly_n, double poly_sigma, float fi, float lambda, int penalization, int cycle, int flags);

    // C++:  void StereoVar::operator ()(Mat left, Mat right, Mat& disp)
    private static native void compute_0(long nativeObj, long left_nativeObj, long right_nativeObj, long disp_nativeObj);

    // C++: int StereoVar::levels
    private static native int get_levels_0(long nativeObj);

    // C++: void StereoVar::levels
    private static native void set_levels_0(long nativeObj, int levels);

    // C++: double StereoVar::pyrScale
    private static native double get_pyrScale_0(long nativeObj);

    // C++: void StereoVar::pyrScale
    private static native void set_pyrScale_0(long nativeObj, double pyrScale);

    // C++: int StereoVar::nIt
    private static native int get_nIt_0(long nativeObj);

    // C++: void StereoVar::nIt
    private static native void set_nIt_0(long nativeObj, int nIt);

    // C++: int StereoVar::minDisp
    private static native int get_minDisp_0(long nativeObj);

    // C++: void StereoVar::minDisp
    private static native void set_minDisp_0(long nativeObj, int minDisp);

    // C++: int StereoVar::maxDisp
    private static native int get_maxDisp_0(long nativeObj);

    // C++: void StereoVar::maxDisp
    private static native void set_maxDisp_0(long nativeObj, int maxDisp);

    // C++: int StereoVar::poly_n
    private static native int get_poly_n_0(long nativeObj);

    // C++: void StereoVar::poly_n
    private static native void set_poly_n_0(long nativeObj, int poly_n);

    // C++: double StereoVar::poly_sigma
    private static native double get_poly_sigma_0(long nativeObj);

    // C++: void StereoVar::poly_sigma
    private static native void set_poly_sigma_0(long nativeObj, double poly_sigma);

    // C++: float StereoVar::fi
    private static native float get_fi_0(long nativeObj);

    // C++: void StereoVar::fi
    private static native void set_fi_0(long nativeObj, float fi);

    // C++: float StereoVar::lambda
    private static native float get_lambda_0(long nativeObj);

    // C++: void StereoVar::lambda
    private static native void set_lambda_0(long nativeObj, float lambda);

    // C++: int StereoVar::penalization
    private static native int get_penalization_0(long nativeObj);

    // C++: void StereoVar::penalization
    private static native void set_penalization_0(long nativeObj, int penalization);

    // C++: int StereoVar::cycle
    private static native int get_cycle_0(long nativeObj);

    // C++: void StereoVar::cycle
    private static native void set_cycle_0(long nativeObj, int cycle);

    // C++: int StereoVar::flags
    private static native int get_flags_0(long nativeObj);

    // C++: void StereoVar::flags
    private static native void set_flags_0(long nativeObj, int flags);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}

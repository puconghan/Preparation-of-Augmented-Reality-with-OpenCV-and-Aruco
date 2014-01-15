
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.ml;



// C++: class CvGBTreesParams
//javadoc: CvGBTreesParams
public class CvGBTreesParams extends CvDTreeParams {

    protected CvGBTreesParams(long addr) { super(addr); }


    //
    // C++:   CvGBTreesParams::CvGBTreesParams()
    //

    //javadoc: CvGBTreesParams::CvGBTreesParams()
    public   CvGBTreesParams()
    {
        
        super( CvGBTreesParams_0() );
        
        return;
    }


    //
    // C++: int CvGBTreesParams::weak_count
    //

    //javadoc: CvGBTreesParams::get_weak_count()
    public  int get_weak_count()
    {
        
        int retVal = get_weak_count_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvGBTreesParams::weak_count
    //

    //javadoc: CvGBTreesParams::set_weak_count(weak_count)
    public  void set_weak_count(int weak_count)
    {
        
        set_weak_count_0(nativeObj, weak_count);
        
        return;
    }


    //
    // C++: int CvGBTreesParams::loss_function_type
    //

    //javadoc: CvGBTreesParams::get_loss_function_type()
    public  int get_loss_function_type()
    {
        
        int retVal = get_loss_function_type_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvGBTreesParams::loss_function_type
    //

    //javadoc: CvGBTreesParams::set_loss_function_type(loss_function_type)
    public  void set_loss_function_type(int loss_function_type)
    {
        
        set_loss_function_type_0(nativeObj, loss_function_type);
        
        return;
    }


    //
    // C++: float CvGBTreesParams::subsample_portion
    //

    //javadoc: CvGBTreesParams::get_subsample_portion()
    public  float get_subsample_portion()
    {
        
        float retVal = get_subsample_portion_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvGBTreesParams::subsample_portion
    //

    //javadoc: CvGBTreesParams::set_subsample_portion(subsample_portion)
    public  void set_subsample_portion(float subsample_portion)
    {
        
        set_subsample_portion_0(nativeObj, subsample_portion);
        
        return;
    }


    //
    // C++: float CvGBTreesParams::shrinkage
    //

    //javadoc: CvGBTreesParams::get_shrinkage()
    public  float get_shrinkage()
    {
        
        float retVal = get_shrinkage_0(nativeObj);
        
        return retVal;
    }


    //
    // C++: void CvGBTreesParams::shrinkage
    //

    //javadoc: CvGBTreesParams::set_shrinkage(shrinkage)
    public  void set_shrinkage(float shrinkage)
    {
        
        set_shrinkage_0(nativeObj, shrinkage);
        
        return;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++:   CvGBTreesParams::CvGBTreesParams()
    private static native long CvGBTreesParams_0();

    // C++: int CvGBTreesParams::weak_count
    private static native int get_weak_count_0(long nativeObj);

    // C++: void CvGBTreesParams::weak_count
    private static native void set_weak_count_0(long nativeObj, int weak_count);

    // C++: int CvGBTreesParams::loss_function_type
    private static native int get_loss_function_type_0(long nativeObj);

    // C++: void CvGBTreesParams::loss_function_type
    private static native void set_loss_function_type_0(long nativeObj, int loss_function_type);

    // C++: float CvGBTreesParams::subsample_portion
    private static native float get_subsample_portion_0(long nativeObj);

    // C++: void CvGBTreesParams::subsample_portion
    private static native void set_subsample_portion_0(long nativeObj, float subsample_portion);

    // C++: float CvGBTreesParams::shrinkage
    private static native float get_shrinkage_0(long nativeObj);

    // C++: void CvGBTreesParams::shrinkage
    private static native void set_shrinkage_0(long nativeObj, float shrinkage);

    // native support for java finalize()
    private static native void delete(long nativeObj);

}

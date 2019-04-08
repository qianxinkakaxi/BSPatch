package com.example.qianxin.bspatchapplication;

/**
 * Created by qianxin on 17/3/27.
 */

public class BsUtil {

    static{
        System.loadLibrary("native-lib-tmp");
    }


    /**
     * 差分
     *
     * @param oldfile
     * @param newfile
     * @param patchfile
     */
    public static  void bsDiff(String oldfile, String newfile, String patchfile)
    {
        diff(oldfile,newfile,patchfile);
    }

    /**
     * 合并
     *
     * @param oldfile
     * @param newfile
     * @param patchfile
     */
    public native  void patch(String oldfile, String newfile, String patchfile);

    /**
     * 差分
     *
     * @param oldfile
     * @param newfile
     * @param patchfile
     */
    public static native  void diff(String oldfile, String newfile, String patchfile);



}

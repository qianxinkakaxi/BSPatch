package com.example.qianxin.bspatchapplication;

import java.io.File;

import android.os.Environment;

public class Constants {

	//路径不能包含中文
	public static final String OLD_APK_PATH = Environment.getExternalStorageDirectory().getAbsolutePath() + "/old.apk";

	public static final String NEW_APK_PATH = Environment.getExternalStorageDirectory().getAbsolutePath() + "/new.apk";

	public static final String PATCH_PATH = Environment.getExternalStorageDirectory().getAbsolutePath() + "/apk.patch";

	public static final String PATCH_APK_PATH = Environment.getExternalStorageDirectory().getAbsolutePath() + "/apk_new.apk";

}

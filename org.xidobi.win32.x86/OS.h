/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class org_xidobi_OS */

#ifndef _Included_org_xidobi_OS
#define _Included_org_xidobi_OS
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_xidobi_OS
 * Method:    CreateFile
 * Signature: (Ljava/lang/String;IIIIIILorg/xidobi/structs/INT;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_CreateFile
  (JNIEnv *, jobject, jstring, jint, jint, jint, jint, jint, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    CloseHandle
 * Signature: (ILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_CloseHandle
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    GetCommState
 * Signature: (ILorg/xidobi/structs/DCB;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_GetCommState
  (JNIEnv *, jobject, jint, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    SetCommState
 * Signature: (ILorg/xidobi/structs/DCB;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_SetCommState
  (JNIEnv *, jobject, jint, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    CreateEventA
 * Signature: (IZZLjava/lang/String;Lorg/xidobi/structs/INT;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_CreateEventA
  (JNIEnv *, jobject, jint, jboolean, jboolean, jstring, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    WriteFile
 * Signature: (I[BILorg/xidobi/structs/DWORD;Lorg/xidobi/structs/OVERLAPPED;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_WriteFile
  (JNIEnv *, jobject, jint, jbyteArray, jint, jobject, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    ReadFile
 * Signature: (ILorg/xidobi/structs/NativeByteArray;ILorg/xidobi/structs/DWORD;Lorg/xidobi/structs/OVERLAPPED;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_ReadFile
  (JNIEnv *, jobject, jint, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    MAKELANGID
 * Signature: (SS)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_MAKELANGID
  (JNIEnv *, jobject, jshort, jshort);

/*
 * Class:     org_xidobi_OS
 * Method:    FormatMessageA
 * Signature: (ILjava/lang/Void;II[BILjava/lang/Void;Lorg/xidobi/structs/INT;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_FormatMessageA
  (JNIEnv *, jobject, jint, jobject, jint, jint, jbyteArray, jint, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    GetOverlappedResult
 * Signature: (ILorg/xidobi/structs/OVERLAPPED;Lorg/xidobi/structs/DWORD;ZLorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_GetOverlappedResult
  (JNIEnv *, jobject, jint, jobject, jobject, jboolean, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    WaitForSingleObject
 * Signature: (IILorg/xidobi/structs/INT;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_WaitForSingleObject
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    RegOpenKeyExA
 * Signature: (ILjava/lang/String;IILorg/xidobi/structs/HKEY;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_RegOpenKeyExA
  (JNIEnv *, jobject, jint, jstring, jint, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    RegCloseKey
 * Signature: (Lorg/xidobi/structs/HKEY;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_RegCloseKey
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    RegEnumValueA
 * Signature: (Lorg/xidobi/structs/HKEY;I[BLorg/xidobi/structs/INT;ILorg/xidobi/structs/INT;[BLorg/xidobi/structs/INT;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_RegEnumValueA
  (JNIEnv *, jobject, jobject, jint, jbyteArray, jobject, jint, jobject, jbyteArray, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    SetCommMask
 * Signature: (IILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_SetCommMask
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    WaitCommEvent
 * Signature: (ILorg/xidobi/structs/INT;Lorg/xidobi/structs/OVERLAPPED;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_WaitCommEvent
  (JNIEnv *, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    PurgeComm
 * Signature: (IILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_PurgeComm
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    ClearCommError
 * Signature: (ILorg/xidobi/structs/INT;Lorg/xidobi/structs/COMSTAT;Lorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_ClearCommError
  (JNIEnv *, jobject, jint, jobject, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    SetCommBreak
 * Signature: (ILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_SetCommBreak
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    ClearCommBreak
 * Signature: (ILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_ClearCommBreak
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    CancelIo
 * Signature: (ILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_CancelIo
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    ResetEvent
 * Signature: (ILorg/xidobi/structs/INT;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_ResetEvent
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    malloc
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_malloc
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_xidobi_OS
 * Method:    memset
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_xidobi_OS_memset
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_xidobi_OS
 * Method:    free
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_xidobi_OS_free
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_xidobi_OS
 * Method:    sizeOf_OVERLAPPED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_sizeOf_1OVERLAPPED
  (JNIEnv *, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    sizeOf_HKEY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_sizeOf_1HKEY
  (JNIEnv *, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    sizeOf_DWORD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_sizeOf_1DWORD
  (JNIEnv *, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    getByteArray
 * Signature: (Lorg/xidobi/structs/NativeByteArray;I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_xidobi_OS_getByteArray
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_xidobi_OS
 * Method:    getValue_DWORD
 * Signature: (Lorg/xidobi/structs/DWORD;)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_getValue_1DWORD
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_xidobi_OS
 * Method:    setValue_DWORD
 * Signature: (Lorg/xidobi/structs/DWORD;I)V
 */
JNIEXPORT void JNICALL Java_org_xidobi_OS_setValue_1DWORD
  (JNIEnv *, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif

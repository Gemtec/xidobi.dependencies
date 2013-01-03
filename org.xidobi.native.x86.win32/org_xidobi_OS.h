/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_xidobi_OS */

#ifndef _Included_org_xidobi_OS
#define _Included_org_xidobi_OS
#ifdef __cplusplus
extern "C" {
#endif
#undef org_xidobi_OS_GENERIC_READ
#define org_xidobi_OS_GENERIC_READ -2147483648L
#undef org_xidobi_OS_GENERIC_WRITE
#define org_xidobi_OS_GENERIC_WRITE 1073741824L
#undef org_xidobi_OS_OPEN_EXISTING
#define org_xidobi_OS_OPEN_EXISTING 3L
#undef org_xidobi_OS_FILE_FLAG_OVERLAPPED
#define org_xidobi_OS_FILE_FLAG_OVERLAPPED 1073741824L
#undef org_xidobi_OS_INVALID_HANDLE_VALUE
#define org_xidobi_OS_INVALID_HANDLE_VALUE -1L
#undef org_xidobi_OS_ERROR_ACCESS_DENIED
#define org_xidobi_OS_ERROR_ACCESS_DENIED 5L
#undef org_xidobi_OS_ERROR_FILE_NOT_FOUND
#define org_xidobi_OS_ERROR_FILE_NOT_FOUND 2L
/*
 * Class:     org_xidobi_OS
 * Method:    CreateFile
 * Signature: (Ljava/lang/String;IIIIII)I
 */
JNIEXPORT jint JNICALL Java_org_xidobi_OS_CreateFile
  (JNIEnv *, jclass, jstring, jint, jint, jint, jint, jint, jint);

/*
 * Class:     org_xidobi_OS
 * Method:    CloseHandle
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_xidobi_OS_CloseHandle
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif

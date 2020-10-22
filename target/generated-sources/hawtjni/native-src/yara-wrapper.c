
#include "yara-wrapper.h"
#include "hawtjni.h"
#include "yara-wrapper_structs.h"
#include "yara-wrapper_stats.h"

#define YaraLibrary_NATIVE(func) Java_com_github_plusvic_yara_embedded_YaraLibrary_##func

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(cast_1jstring)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_cast_1jstring_FUNC);
	rc = (jstring)cast_jstring(env, (const char*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_cast_1jstring_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yara_1compiler_1add_1file)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1, jstring arg2, jstring arg3, jstring arg4)
{
	
	const char *lparg2= NULL;
	const char *lparg3= NULL;
	const char *lparg4= NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1compiler_1add_1file_FUNC);
	if (arg2) if ((lparg2 = (*env)->GetStringUTFChars(env, arg2, NULL)) == NULL) goto fail;
	if (arg3) if ((lparg3 = (*env)->GetStringUTFChars(env, arg3, NULL)) == NULL) goto fail;
	if (arg4) if ((lparg4 = (*env)->GetStringUTFChars(env, arg4, NULL)) == NULL) goto fail;
	rc = (jint)yara_compiler_add_file(env, (YR_COMPILER *)(intptr_t)arg1, lparg2, lparg3, lparg4);
fail:
	if (arg4 && lparg4) (*env)->ReleaseStringUTFChars(env, arg4, lparg4);
	if (arg3 && lparg3) (*env)->ReleaseStringUTFChars(env, arg3, lparg3);
	if (arg2 && lparg2) (*env)->ReleaseStringUTFChars(env, arg2, lparg2);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1compiler_1add_1file_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1match_1offset)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1match_1offset_FUNC);
	rc = (jlong)yara_match_offset(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1match_1offset_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1match_1value)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1match_1value_FUNC);
	rc = (jstring)yara_match_value(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1match_1value_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1meta_1identifier)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1meta_1identifier_FUNC);
	rc = (jstring)yara_meta_identifier(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1meta_1identifier_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yara_1meta_1integer)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1meta_1integer_FUNC);
	rc = (jint)yara_meta_integer(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1meta_1integer_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1meta_1string)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1meta_1string_FUNC);
	rc = (jstring)yara_meta_string(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1meta_1string_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yara_1meta_1type)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1meta_1type_FUNC);
	rc = (jint)yara_meta_type(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1meta_1type_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1module_1load_1data)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1, jstring arg2)
{
	
	const char *lparg2= NULL;
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1module_1load_1data_FUNC);
	if (arg2) if ((lparg2 = (*env)->GetStringUTFChars(env, arg2, NULL)) == NULL) goto fail;
	rc = (jlong)yara_module_load_data(env, (void*)(intptr_t)arg1, lparg2);
fail:
	if (arg2 && lparg2) (*env)->ReleaseStringUTFChars(env, arg2, lparg2);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1module_1load_1data_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1module_1name)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1module_1name_FUNC);
	rc = (jstring)yara_module_name(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1module_1name_FUNC);
	return rc;
}

JNIEXPORT void JNICALL YaraLibrary_NATIVE(yara_1module_1unload_1data)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1module_1unload_1data_FUNC);
	yara_module_unload_data(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1module_1unload_1data_FUNC);
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1rule_1identifier)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1identifier_FUNC);
	rc = (jstring)yara_rule_identifier(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1identifier_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1meta_1next)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1meta_1next_FUNC);
	rc = (jlong)yara_rule_meta_next(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1meta_1next_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1metas)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1metas_FUNC);
	rc = (jlong)yara_rule_metas(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1metas_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1string_1next)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1string_1next_FUNC);
	rc = (jlong)yara_rule_string_next(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1string_1next_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1strings)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1strings_FUNC);
	rc = (jlong)yara_rule_strings(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1strings_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1tag_1next)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1tag_1next_FUNC);
	rc = (jlong)yara_rule_tag_next(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1tag_1next_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1rule_1tags)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1rule_1tags_FUNC);
	rc = (jlong)yara_rule_tags(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1rule_1tags_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1string_1identifier)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1string_1identifier_FUNC);
	rc = (jstring)yara_string_identifier(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1string_1identifier_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1string_1match_1next)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1string_1match_1next_FUNC);
	rc = (jlong)yara_string_match_next(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1string_1match_1next_FUNC);
	return rc;
}

JNIEXPORT jlong JNICALL YaraLibrary_NATIVE(yara_1string_1matches)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jlong rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1string_1matches_FUNC);
	rc = (jlong)yara_string_matches(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1string_1matches_FUNC);
	return rc;
}

JNIEXPORT jstring JNICALL YaraLibrary_NATIVE(yara_1tag_1string)
	(JNIEnv *env, jobject that, jobject arg0, jlong arg1)
{
	
	jstring rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yara_1tag_1string_FUNC);
	rc = (jstring)yara_tag_string(env, (void*)(intptr_t)arg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yara_1tag_1string_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1compiler_1add_1string)
	(JNIEnv *env, jobject that, jlong arg0, jstring arg1, jstring arg2)
{
	const char *lparg1= NULL;
	const char *lparg2= NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1compiler_1add_1string_FUNC);
	if (arg1) if ((lparg1 = (*env)->GetStringUTFChars(env, arg1, NULL)) == NULL) goto fail;
	if (arg2) if ((lparg2 = (*env)->GetStringUTFChars(env, arg2, NULL)) == NULL) goto fail;
	rc = (jint)yr_compiler_add_string((YR_COMPILER *)(intptr_t)arg0, lparg1, lparg2);
fail:
	if (arg2 && lparg2) (*env)->ReleaseStringUTFChars(env, arg2, lparg2);
	if (arg1 && lparg1) (*env)->ReleaseStringUTFChars(env, arg1, lparg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1compiler_1add_1string_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1compiler_1create)
	(JNIEnv *env, jobject that, jlongArray arg0)
{
	jlong *lparg0=NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1compiler_1create_FUNC);
	if (arg0) if ((lparg0 = (*env)->GetLongArrayElements(env, arg0, NULL)) == NULL) goto fail;
	rc = (jint)yr_compiler_create((YR_COMPILER **)lparg0);
fail:
	if (arg0 && lparg0) (*env)->ReleaseLongArrayElements(env, arg0, lparg0, 0);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1compiler_1create_FUNC);
	return rc;
}

JNIEXPORT void JNICALL YaraLibrary_NATIVE(yr_1compiler_1destroy)
	(JNIEnv *env, jobject that, jlong arg0)
{
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1compiler_1destroy_FUNC);
	yr_compiler_destroy((YR_COMPILER *)(intptr_t)arg0);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1compiler_1destroy_FUNC);
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1compiler_1get_1rules)
	(JNIEnv *env, jobject that, jlong arg0, jlongArray arg1)
{
	jlong *lparg1=NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1compiler_1get_1rules_FUNC);
	if (arg1) if ((lparg1 = (*env)->GetLongArrayElements(env, arg1, NULL)) == NULL) goto fail;
	rc = (jint)yr_compiler_get_rules((YR_COMPILER*)(intptr_t)arg0, (YR_RULES**)lparg1);
fail:
	if (arg1 && lparg1) (*env)->ReleaseLongArrayElements(env, arg1, lparg1, 0);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1compiler_1get_1rules_FUNC);
	return rc;
}

JNIEXPORT void JNICALL YaraLibrary_NATIVE(yr_1compiler_1set_1callback)
	(JNIEnv *env, jobject that, jlong arg0, jlong arg1, jlong arg2)
{
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1compiler_1set_1callback_FUNC);
	yr_compiler_set_callback((YR_COMPILER*)(intptr_t)arg0, (void (*)(int, const char*, int, const char*,void*))(intptr_t)arg1, (void *)(intptr_t)arg2);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1compiler_1set_1callback_FUNC);
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1finalize)
	(JNIEnv *env, jobject that)
{
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1finalize_FUNC);
	rc = (jint)yr_finalize();
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1finalize_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1initialize)
	(JNIEnv *env, jobject that)
{
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1initialize_FUNC);
	rc = (jint)yr_initialize();
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1initialize_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1rules_1destroy)
	(JNIEnv *env, jobject that, jlong arg0)
{
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1rules_1destroy_FUNC);
	rc = (jint)yr_rules_destroy((YR_RULES*)(intptr_t)arg0);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1rules_1destroy_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1rules_1scan_1file)
	(JNIEnv *env, jobject that, jlong arg0, jstring arg1, jint arg2, jlong arg3, jlong arg4, jint arg5)
{
	const char *lparg1= NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1rules_1scan_1file_FUNC);
	if (arg1) if ((lparg1 = (*env)->GetStringUTFChars(env, arg1, NULL)) == NULL) goto fail;
	rc = (jint)yr_rules_scan_file((YR_RULES*)(intptr_t)arg0, lparg1, arg2, (YR_CALLBACK_FUNC)arg3, (void*)(intptr_t)arg4, arg5);
fail:
	if (arg1 && lparg1) (*env)->ReleaseStringUTFChars(env, arg1, lparg1);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1rules_1scan_1file_FUNC);
	return rc;
}

JNIEXPORT jint JNICALL YaraLibrary_NATIVE(yr_1rules_1scan_1mem)
	(JNIEnv *env, jobject that, jlong arg0, jbyteArray arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jint arg6)
{
	jbyte *lparg1=NULL;
	jint rc = 0;
	YaraLibrary_NATIVE_ENTER(env, that, YaraLibrary_yr_1rules_1scan_1mem_FUNC);
	if (arg1) if ((lparg1 = (*env)->GetByteArrayElements(env, arg1, NULL)) == NULL) goto fail;
	rc = (jint)yr_rules_scan_mem((YR_RULES*)(intptr_t)arg0, lparg1, arg2, arg3, (YR_CALLBACK_FUNC)arg4, (void*)(intptr_t)arg5, arg6);
fail:
	if (arg1 && lparg1) (*env)->ReleaseByteArrayElements(env, arg1, lparg1, 0);
	YaraLibrary_NATIVE_EXIT(env, that, YaraLibrary_yr_1rules_1scan_1mem_FUNC);
	return rc;
}


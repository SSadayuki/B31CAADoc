#
BUILT_OBJECT_TYPE = BUILDTIME DATA
#
#if os Windows
BTV_ROOT_SRCPATH = MSVC_import_export
#elif UNIX
# if defined(MK_GNUCVER) || defined(MK_CLANGVER)
#if (defined MK_IBMVAVER) && (MK_IBMVAVER == 16)
BTV_ROOT_SRCPATH = Dummy_import_export
# else  // MK_IBMVAVER && MK_IBMVAVER == 16
BTV_ROOT_SRCPATH = GCC_import_export
# endif // MK_IBMVAVER && MK_IBMVAVER == 16
# else  // MK_GNUCVER || MK_CLANGVER
BTV_ROOT_SRCPATH = Dummy_import_export
# endif // MK_GNUCVER || MK_CLANGVER
#elif MOBILE
BTV_ROOT_SRCPATH = GCC_import_export
#else // MOBILE
BTV_ROOT_SRCPATH = Dummy_import_export 
#endif  // MOBILE
#
BTV_COPY_EXTENSION = *.h
BTV_ROOT_ITF_COPY = @PublicInterfaces
BTV_PRESERVE_ITF_TIMESTAMP = YES
BTV_DELIVERABLE = NO 
#

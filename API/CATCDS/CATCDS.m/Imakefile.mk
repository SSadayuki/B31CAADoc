#for SRC_LINK_WITH in fw CATCDSDebug.tst
ALLOW_STATIC_LINK=YES 

# COPYRIGHT DASSAULT SYSTEMES 2002
#======================================================================
# Imakefile for module CATCDS.m
#======================================================================
#
#  Jul 2002  Creation:                      Dmitry USHAKOV, LEDAS Ltd.
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE=SHARED LIBRARY

INCLUDED_MODULES=SolverInterface         \
                 CDSModel                \
                 CDSInterface            \
                 InternalModelisation    \
                 EquationGenerator       \
                 EquationSolver          \
                 AlgebraicDecomposition  \
                 GeometryUpdate          \
                 SolverUtilities         \
                 GeometricDecomposition  \
                 GeometricSimplification \
                 EquationReduction       \
                 HeuristicRigidification \
                 DOFProjection           \
                 CartesianModelisation   \
                 DifferentialSolver      \
                 RelativeRepresentation  \
                 DiagnosticsComputation  \
                 AutomaticConstraining   \
                 ProfileSolver         

# to link with our own new/delete operators
LOCAL_LD_ADDED_OBJECTS=

LINK_WITH= \
	CATCDSUtilities \
	CATWBx

LOCAL_CCFLAGS_ASSERT=-DNOT_CDS_ASSERT $(MKMK_DEBUG:+"-DCDS_ASSERT")

#if os Windows
LOCAL_CCFLAGS=-D_HAS_EXCEPTIONS=0 $(LOCAL_CCFLAGS_ASSERT)
#elif os Linux
LOCAL_CCFLAGS=-std=c++0x -DCPP11_AVALAIBLE $(LOCAL_CCFLAGS_ASSERT)
#else
LOCAL_CCFLAGS=$(LOCAL_CCFLAGS_ASSERT)
#endif


#ifndef CATBlocDefs_h
#define CATBlocDefs_h
#include "CATIAV5Level.h"

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Enumerations used for constraint blocs.
 * <b>Role</>: Management of constraint blocs needs constants.
 * This header defines these constants.
 */

/**
 * @nodoc
 */

enum CATBlocFix {  
	BlocFix_ERROR = 0,
	BlocFix_True = 1,
	BlocFix_False = 2,
	BlocFix_ForNextUpdate = 3
	};

/**
 * @nodoc
 */

enum CATBlocRigid {  
	BlocRigid_ERROR = 0,
	BlocRigid_True = 1,
	BlocRigid_False = 2
	};

/**
 * @nodoc
 */


enum CATBlocDof { Bunknown=-1, BKO_Model=1, BKO_Model1=2, BKO_NoFather=3, BKO_NotExpected=4, 
                   BNotUpdated=5, BAcceptable=6, BNotAcceptable=7 };

/**
 * @nodoc
 */

#ifndef CATSOLVERDOF_STATUS
#define CATSOLVERDOF_STATUS

enum CATSolverDofStatus { CATSolverDof_NotUsed=1 , CATSolverDof_Static=2, CATSolverDof_Free=3,

                          CATSolverDof_Instantaneous=4, CATSolverDof_Static_Normal=5,

						  CATSolverDof_Instantaneous_Normal=6};
#endif

#endif

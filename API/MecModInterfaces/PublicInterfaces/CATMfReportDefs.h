#ifndef CATMfReportDefs_h
#define CATMfReportDefs_h

// COPYRIGHT DASSAULT SYSTEMES 2007
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "MecModItfCPP.h"

/**
 * Store ProcReport treatement type. 
* <b>Role:</b> This enum used to specify options for the report used in geometrical features ( @href CATIMfProcReport )<br>
 * @param Copy
 * The nodes of the previous scope which are not modified by the operation 
 * are copied in the current scope,
 * @param NoCopy
 * The nodes of the previous scope which are not modified by the operation 
 * are not copied in the current scope.
 */
ExportedByMecModItfCPP enum CATMfStoreProcReportType { Copy, NoCopy  } ;

/**
 * Additional rules to be applied when creating the scope from the journal.
* <b>Role:</b> This enum used to specify options for the report used in geometrical features ( @href CATIMfProcReport )<br>
 * <p>Refer to the CAA Encyclopedia articles entitled
 * "Integrating a New Geometrical Feature in the Update Mechanism" and 
 * "Generic Naming Overview" for details about the usage of this enum.
 * @param GenerToGenerCopy
 * The "Creation" nodes to be created through the current feature must be also marked with "Copy" information.
 * @param GenerToModifyCovering
 * The "Creation" nodes to be created through the current feature must be typed as "Modification" with "Covering"
 * information.
 * @param GenerToGenerCovering
 * The "Creation" nodes to be created through the current feature must be also marked with "Covering" information.
 */
 ExportedByMecModItfCPP enum CATMfProcTranslateRules { GenerToGenerCopy, GenerToModifyCovering, GenerToGenerCovering  };

#endif


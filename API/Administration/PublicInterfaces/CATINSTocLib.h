#ifndef CATINSTocLib_H
#define CATINSTocLib_H

/* COPYRIGHT DASSAULT SYSTEMES 2003 */
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifdef _WINDOWS_SOURCE
#ifdef __WFTOCACD
#define ExportedByWFTOCACD  __declspec(dllexport)
#else
#define ExportedByWFTOCACD  __declspec(dllimport)
#endif
#else
#define ExportedByWFTOCACD
#endif

//THE
#include "stdlib.h"  // pour le NULL
//EHT

//--------------------------------------------------------------------------
// NB : Pour les calls ci-dessous on suppose que l environnement est actif
//      Donc que la variable CATInstallPath est positionnee
//--------------------------------------------------------------------------


#ifdef __cplusplus
extern "C" {
#endif

	/**
	* Returns the release number.
	* @return 
    * <dl>
    * <dt><tt>B0x</tt>  <dd>For the V5Rx 
    * <dt><tt>NULL</tt> <dd>If problem
    * </dl>  
	*/
//THE
//ExportedByWFTOCACD char * CATGetGALevel ( void );
ExportedByWFTOCACD char * CATGetGALevel ( char * instPath = NULL );
//EHT

	/**
	* Returns the number of the last installed service pack.
	* @return
    * <dl>
    * <dt><tt>x</tt>  <dd>For the SPKx (0 if no service pack)
    * <dt><tt>-1</tt> <dd>If problem
    * </dl> 
	*/
//THE
//ExportedByWFTOCACD int CATGetSPKLevel ( void );
ExportedByWFTOCACD int CATGetSPKLevel ( char * instPath = NULL );
//EHT


	/**
	* Returns the number of the last installed hot fix.
	* @return
    * <dl>
    * <dt><tt>x</tt>  <dd>For the HFXx (0 if no hot fix)
    * <dt><tt>-1</tt> <dd>If problem
    * </dl> 
	*/

ExportedByWFTOCACD int CATGetHFXLevel ( char * instPath = NULL );

/**
* Gives the installation status of a configuration (or product).
* <br><b>Role</b>: Gives the installation status of a configuration(or product)
* @param name 
*     Specifies the name of the configuration( or product)
* @param instPath
*     Specifies the installation path, if not specified CATInstallPath is used .
* @return
* <dl>
*      <dt>1</dt>
*      <dd>If configuration or product is installed.</dd>
*      <dt>0</dt>
*      <dd>If configuration or product is not installed.</dd>
*      <dt>-1</dt>If problem
* </dl> 
*/

ExportedByWFTOCACD int CATIsInstalled (const char *name ,char * instPath = NULL );





#ifdef __cplusplus
};
#endif

#endif

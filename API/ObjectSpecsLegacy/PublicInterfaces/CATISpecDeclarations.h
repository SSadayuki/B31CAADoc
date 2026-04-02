#ifndef CATISpecDeclarations_H_
#define CATISpecDeclarations_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "CATDataType.h"

/**
* Specification on attributes to define its behavior at instanciation.
* <b>Role:</b> The access mode of an attribute defines the behavior of 
* the attribute while instanciating the feature owning it.
* @param Private
*        the attribute defined on the reference will not be on instances.
* @param Public
*        the attribute defined on the reference will be on all instances.
* @param Mandatory
*        not used
*/
enum CATAttrAccess { Private,Public,Mandatory };


#include "CATWinCORBA.h"
/**
* Defines kind of data valuating an attribute.
* @param tk_double    
*        to specify a double C++ type 
* @param tk_boolean   
*        to specify a DASSAULT SYSTEMES boolean typedef 
* @param tk_octet     
*        to specify an unsigned char C++ type 
* @param tk_string    
*        to specify a string C++ type. 
* @param tk_specobject
*        to specify a feature 
* @param tk_list     
*        to specify a list of any other types 
* @param tk_external  
*        to specify an object to be linked to another one by a symbolic link.
* @param tk_component 
*        to specify a component, i.e. a feature that can be aggregated only 
*        once to a parent feature 
* @param tk_integer 
*        to specify an integer C++ type 
*/
#ifndef CATAttrKind
#define CATAttrKind TCKind
#endif 

/**
* Specification for links resolution.
* @param ANYWHERE
*        priority to SearchOrder. 
* @param LINK_PRIORITY
*        priority to informations storre in the link, if the resolution fail, then use SearchOrder.
* @param IN_SESSION
*        resolution only with loaded objects in session.
* @param DEFAULT_PRIORITY
*        use settings to find link resolution specifications.
*/
enum CATFlavorParam { ANYWHERE, LINK_PRIORITY, IN_SESSION, DEFAULT_PRIORITY,DONT_BIND, DONT_SOLVE=100 };


/**
* Specification on attributes to define its quality.
* <b>Role:</b>The attribute quality is a parameter that allows to specify 
* the role played by an attribute in the Update mechanism ( in DS 
* default Update mechanism ).
* @param sp_NEUTRAL
*         attributes of sp_NEUTRAL quality are ignored by the default Update mechanism.
* @param sp_IN
*         qualifies attributes which are usually required to define or specify a feature.
* @param sp_OUT
*         qualifies attributes whose values result from a Build operation and may be used 
*         as input parameters for other features.
*/	
enum CATAttrInOut { sp_NEUTRAL , sp_IN , sp_OUT };


/**
* TimeStamp used in the feature modeler.
* <b>role:</b> it does not correspond to a date.
*/
typedef CATLONG32 CATOldTimeStamp;

/**
* TimeStamp used in the update mechanism.
* <b>role:</b> it does not correspond to a date.
*/
typedef CATLONG32 CATOldUpdateStamp;


/** @nodoc */
#ifndef NULL_string
#define NULL_string CATUnicodeString()
#endif

/**
* @nodoc
* Macros utilisees pour les types complexes.
*/
#define tk_specobject(ident)	tk_specobject,ident
/**
* @nodoc
* Macros utilisees pour les types complexes.
*/
#define tk_list(ident)		tk_list,ident


/**
* Specification to define kind of relation with an other specObject.
* <b> Role: </b> used in IsExternalMethod of CATISpecObject.
* @param Reference
*        the other specobject is the reference of this one.
* @param Startup
*        the other specobject is the startup of this one.
* @param AggrFather
*        the other specobject is aggregating this one.
* @param Supertype
*        the other specobject is the supertype of this one.
* @param AutonameFather
*        the other specobject is the autonaming father of this one.
*/
enum CATParentKind { Reference, Startup, AggrFather, Supertype, AutonameFather };


#endif









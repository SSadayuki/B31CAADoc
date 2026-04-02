/**
 * @quickReview LDI 02:06:21
 * @quickReview VSR1 19:06:20 VS2017 Compatibility-Impact KnowledgeEngineSdm.tst\KT0SCHEM.m
 */
// COPYRIGHT DASSAULT SYSTEMES  1996
// ------------------------------------------------------------------------------------------------
//  SDAI -- C++ Language Binding -- SdaiEntityInstance
// ------------------------------------------------------------------------------------------------
//  Auteurs :
//      Corinne  VANDAELE (fevrier 1996)
//	Philippe BAUCHER  
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: 6 fevrier 1996
//	AUTEUR		: CVE
//	NATURE		: Creation
//	DESCRIPTION	: Norme ISO 10303-22 (binding C++)
//
// ------------------------------------------------------------------------------------------------
// Definition :
//
//      'SdaiEntityInstance' represente une instance d'une 'entity_definition'
//
//      'SdaiEntityInstance' est le super-type de ttes les instances (hormis les SdaiAggrInstances)
//	qui peuvent etre manipulees par SDAI.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   entity_instance
//
//	    ABSTRACT SUPERTYPE OF ( ONEOF (sdai_instance, application_instance) ) ;
//
//	    owning_model : sdai_model ;              (* Modele auquel appartient l'instance *)
//	    definition   : entity_definition ;       (* Definition de l'entite instanciee *)
//	    values       : LIST OF attribute_value ; (* Valeurs des attributs explicites de l'instance *)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#ifndef	SdaiEntityInstance_H
#define	SdaiEntityInstance_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <KS0SIMPL.h>

#include <SdaiMacro.h>
#include <SdaiRoot.h>

class CATSdaiEntityInstance;
class SdaiBoolean;
class SdaiLogical;
class SdaiString;
class SdaiPrimitiveH;
/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#if defined(_MSC_VER) && (_MSC_VER>=1915)
#undef _CRT_INTERNAL_NONSTDC_NAMES
#endif
#include <iosfwd.h>
#else
class ostream;
#endif

// JNI 03/2003 optional build feature to have per-object reference counting tracking.
// This is exclusively used to debug the internal reference counting of SDAI.
// #define SDAI_WITH_MLKTRACKER

#ifdef SDAI_WITH_MLKTRACKER
#include "CATUnicodeString.h"
#endif

/**
 * Class representing an instance of an SDAI entity_definition.
 */
class ExportedByKS0SIMPL SdaiEntityInstance : public SdaiRoot
{
private:
        friend class SdaiModelContents ;
        friend class CATSdaiModelContents ;
	friend class SdaiEntityExtents ;
	friend class CATSdaiModel ;
	friend class CATSdaiAppInstance;

	/* **************************************************************************************/
	/* C O N S T R U C T O R S								*/
	/* D E S T R U C T O R S								*/
	/* **************************************************************************************/
public :
/** @nodoc */
	SdaiEntityInstance ();
/** @nodoc */
	SdaiEntityInstance ( const SdaiEntityInstance& a_repliquer );

protected :
	virtual	~SdaiEntityInstance ();

        // ****************************************************************************************
        // S D A I    O P E R A T I O N    D E C L A R A T I O N S
        // ****************************************************************************************
public :
	// donne le modele auquel appartient l'instance
/** @nodoc */
	const SdaiModelH FindEntityInstanceModel	( )  const;

	/**
    * Tests if an SdaiEntityInstance is an instance of a given type.
	*  @param typeName - the type to check with
	*/
	virtual const SdaiBoolean &  	IsInstanceOf ( const SdaiString&	typeName )  const;
/** @nodoc */
	virtual	const SdaiBoolean &	IsInstanceOf	( const SdaiEntityH&	typeEnt )  const;

	/**
    * Tests if an SdaiEntityInstance is of a given type.
	*  @param typeName - the type to check with
	*/
	virtual	const SdaiBoolean & 	IsKindOf	( const SdaiString&	typeName )  const;
/** @nodoc */
    virtual const SdaiBoolean & 	IsKindOf	( const SdaiEntityH&	typeEnt )  const;

	// determine si l'instance et le parametre entInst sont egales (au sens de l'operateur :=:)
/** @nodoc */
    virtual const SdaiLogical & 	IsSame ( const SdaiEntityInstanceH&	entInst )  const;

	// determine si l'instance et le parametre entInst sont identiques 
	// (au sens de l'operateur =)
/** @nodoc */
	virtual const SdaiLogical &	IsEqual ( const SdaiEntityInstanceH	entInst )  const;

	/**
    * Gets the value of an attribute.
	*  @param attName - the name of the attribute
	*/
	virtual const SdaiPrimitiveH &	GetAttr	( const SdaiString&  attName )	const;
/** @nodoc */
	virtual	const SdaiPrimitiveH &	GetAttr	( const SdaiAttrH&  attDef )	const;

	/**
    * Tests if an attribute has a valid value.
	*  @param att_name - the name of the attribute
	*/
	virtual const SdaiBoolean &	TestAttr( const SdaiString&  att_name )  const;
/** @nodoc */
	virtual	const SdaiBoolean &	TestAttr( const SdaiAttrH&  att_def )	 const;

	/**
    * Gets the name of the type of a SdaiEntityInstance.
	*/
	virtual	const	SdaiNamedTypeH	GetInstanceType ( )  const;

	/* Methode renvoyant le nom en clair de la classe */
/** @nodoc */
        virtual const	SdaiString &    GetInstanceTypeName()   const ;

	// Methode renvoyant le nom en clair de la classe 
/** @nodoc */
	static  const SdaiString &      LeType(); /*"EntityInstance"*/

        // ****************************************************************************************
        // D S    O P E R A T I O N    D E C L A R A T I O N S
        // ****************************************************************************************
public:
	// renvoie le nom du schema de l'instance (ajout BLC)
/** @nodoc */
	virtual const 	SdaiString &	GetInstanceSchemaName ()	const;

	// Operateur d'ecriture de l'instance  - Ajout CCT -
/** @nodoc */
        friend ExportedByKS0SIMPL ostream&  operator<< (ostream& , const SdaiEntityInstance&) ;
/** @nodoc */
        friend ExportedByKS0SIMPL ostream&  operator<< (ostream& , const SdaiEntityInstanceH&) ;

	// affiche l'entite au format ISO 10303-21  - Ajout CCT -
/** @nodoc */
        virtual void  DumpInstance( ostream& ) ;

	// Fonction d'acces a l'identificateur de l'instance  - Ajout CCT -
/** @nodoc */
        virtual const char * GetInstanceName () const ;
/** @nodoc */
        virtual unsigned int GetInstanceNameId () const ;

	// Methode indiquant si l'entite est protegee ou non (Ajout CVE)
/** @nodoc */
	unsigned char IsProtected() ;


#ifdef SDAI_MULTI_TRANS_BCC
public:
  // JNI: this is necessary to allow logical destruction of an instance in a specific context while it is
  // still referred to in another private context.
  /**
   * Note that external clients never have to addref/release, this reference counting is purely used for
   * the internal purposes of SDMRuntime.
   *
   */
/** @nodoc */
  CATLONG32 refs;
#ifdef SDAI_WITH_MLKTRACKER
  /**
   * @nodoc
   * when built in SDAI_WITH_MLKTRACKER mode, this allows us to have
   * stable tag-based memory debugging. Used to debug the internal reference
   * count on SdaiEntityInstance objects.
   */
  CATLONG32 _tag;
#endif
/** @nodoc */
  virtual void addref();
/** @nodoc */
  virtual void release();
  
    private:
    //bcc: the implementation was incorrect anyway, might as well remove it
#endif
  
        // inline  CATSdaiEntityInstance *   EntityInstance()  const { return  _EntityInstance; }

        // ****************************************************************************************
        // I M P L E M E N T A T I O N
        // ****************************************************************************************
protected :
        // Pointeur sur l'implementation
/** @nodoc */
        SdaiModel* _model;
        // CATSdaiEntityInstance *  _EntityInstance;


};


// Fonction globale determinant si une SdaiEntityInstance est valide (renvoie sdaiTRUE)
// ou invalide [ == NULL !? ] (renvoie sdaiFALSE)
// ExportedByKS0LATE extern	const SdaiBoolean &	EXISTS ( const SdaiEntityInstanceH ) ;

#endif	/* _SDAI_ENTITY_INSTANCE_H_ */


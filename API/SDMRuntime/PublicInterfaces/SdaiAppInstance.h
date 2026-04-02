/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// SdaiAppInstance:
//  an instance of an entity in an application schema
//
//=============================================================================
// Usage Notes:
//
// cf. Norm ISO 10303-22 (binding C++)
//=============================================================================
// Feb. 96   Creation                                   C. Vandaele
//=============================================================================

#ifndef SdaiAppInstance_H
#define SdaiAppInstance_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include <SdaiMacro.h>
#include <CATCollec.h>
#include "KS0LATE.h"
#include <SdaiEntityInstance.h>
#include "CATSmallAllocatorPerBlock.h"

class SdaiAttr;
class CATSdaiAppInstance;
class SdaiList;
class SdaiExplicitAttr;
class SdaiBoolean;
class SdaiEntity;
class CATSdaiAttrValue;
class CATLISTP(SdaiAttr);


// ------------------------------------------------------------------------------------------------
// Constant Declaration
// ------------------------------------------------------------------------------------------------
ExportedByKS0LATE extern const SdaiInteger BASE_SAVE;

// ------------------------------------------------------------------------------------------------
// Definition :
//
//	'SdaiAppInstance' est la super-classe de toutes les entit‚s applicatives.
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY	application_instance
//
//		SUBTYPE OF (entity_instance)
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

// (CECI ETAIT DANS LA NORME SDAI : class SdaiAppInstance : virtual public SdaiEntityInstance )
// Modification OFR : sinon problemes avec SdaiEntityInstance qui devient une base virtuelle
/**
 * Class for SDAI application schema instances.
 */
class ExportedByKS0LATE SdaiAppInstance : public SdaiEntityInstance
{
    /** @nodoc pour utilisation de l operateur prive delete */ 
    friend class CATSdaiTRSInstanceCreation;
    /** @nodoc pour utilisation de l operateur prive delete */ 
    friend class CATSdaiTRSInstanceErasure;
    /** @nodoc pour CreateEntityInstance */ 
    friend class SdaiEntityInstance;
    /** @nodoc pour acces au destructeur */ 
    friend class CATSdaiModelContents;
    /** @nodoc pour acces au destructeur (methode statique DriverDelete) */
    friend class CATSdaiAppInstance;

    // ****************************************************************************************
    // C O N S T R U C T O R S
    // D E S T R U C T O R
    // ****************************************************************************************
    public :
    /** @nodoc */
    SdaiAppInstance();

    // Constructeur dans un modele
    /** @nodoc */
    SdaiAppInstance( SdaiModelH) {}
    
    /** @nodoc */
    SdaiAppInstance( const SdaiAppInstance& a_repliquer );

    protected :
    /** @nodoc virtual */	
    virtual ~SdaiAppInstance();	// Destruction physique

public:
  /** @nodoc */
  void release();

    // ****************************************************************************************
    // M E M O R Y   M A N A G M E N T   O P E R A T I O N S
    // ****************************************************************************************
    public :
    // Operateur new (qui ne doit pas etre defini : cf D.10.5.3, p. 365)
    /** @nodoc */
    //static void* operator new ( size_t l) { return ::operator new(l); }
#ifndef NO_CATSmallAllocatorPerBlock
    /** @nodoc */
    static void* operator new ( size_t, SdaiModelH );
#endif
    protected :
    // Norme C++ : L'operateur delete doit toujours avoir un premier argument de type void *
    // (bmx0398) static void operator delete (void * p) {::operator delete(p);}

    // ****************************************************************************************
    // S D A I    O P E R A T I O N    D E C L A R A T I O N S
    // ****************************************************************************************
    public :
    /**
     * Destroys a SdaiAppInstance.
     *  @param appInst - the concerned SdaiAppInstance
     */
    static void Delete ( SdaiAppInstanceH appInst );

    // determine si l'instance et le parametre entInst sont egales (au sens de l'operateur :=:)
    /** @nodoc */
    virtual const SdaiLogical & 	IsSame ( const SdaiEntityInstanceH&	entInst )  const;

    /**
     * Gets the value of an attribute.
     *  @param attName - the name of the attribute
     *
     * JNI 05/03/02 GetAttr calls are always in "current context", if a driver context view is
     * needed (this is usually only needed by the driver itself), then use AttrValueAccess.
     * 
     */
    const SdaiPrimitiveH &		GetAttr	( const SdaiString&  attName )	const;
    /** @nodoc
     * Same as above, except its works with the attribute definition, and therefore is faster (especially
     * if you need to read the same attribute on many objects of the same type.
     */
    virtual const SdaiPrimitiveH &		GetAttr	( const SdaiAttrH&  attDef )	const;
  
    /**
     * Tests if an attibute has a valid value.
     *  @param att_name - the name of the attribute
     */
    const SdaiBoolean &	TestAttr( const SdaiString&  att_name )  const;
    /** @nodoc */
    const SdaiBoolean &	TestAttr( const SdaiAttrH&  att_def )	 const;

    /**
     * Erases the value of an attribute.
     *  @param attName - the name of the attribute
     */
    virtual void UnsetAttr ( const SdaiString& attName ) ;
    
    /** @nodoc 
     * Erases the value of an attribute
     * @param -the definition of the attribute
     * @iCtxt only available if compiled with transaction context support
     *        
     */
#ifndef SDAI_MULTI_TRANS_BCC  
		virtual void UnsetAttr ( const SdaiAttrH& attDef ) ;
#else
		/** @nodoc */
    virtual void UnsetAttr ( const SdaiAttrH& attDef , SdaiRoot::ContextSensitivity iCtxt = SdaiRoot::CurrentTransactionContext) ; 
#endif

    // assigne une valeur a un attribut
    /** @nodoc */
    void	PutAttr ( const SdaiString&	attrName,
            SdaiPrimitiveType	attrType,
            const SdaiPrimitiveH&	attrVal );
    /** @nodoc */
    void	PutAttr ( const SdaiAttrH&	attrDef,
            SdaiPrimitiveType	attrType,
            const SdaiPrimitiveH&	attrVal);

    /**
     * Assigns a value to an attribute.
    *  @param attName - the name of the attribute
    *  @param attrVal - the value of the attribute
    */
    void	PutAttr ( const SdaiString&	attrName,
            const SdaiPrimitiveH&	attrVal );
    /** @nodoc */
#ifdef SDAI_MULTI_TRANS_BCC    
    inline void	PutAttr ( const SdaiAttrH&	attrDef,
            const SdaiPrimitiveH&	attrVal )
    {
        PutAttrContextSensitive( attrDef, 
                attrVal, CurrentTransactionContext);

    }
    /** @nodoc
     * Valuate an attribute.
     * The value iCtxt will determine if the attribute is valuated in the
     * current transaction context (normal case) or in the default transaction
     * context (only to be used by drivers which are valuating the attribute
     * from persistent data)
     */
    virtual void PutAttrContextSensitive( const SdaiAttrH&	attrDef, 
            const SdaiPrimitiveH&	attrVal, SdaiRoot::ContextSensitivity iCtxt);

#else
		/** @nodoc */
    virtual void	PutAttr ( const SdaiAttrH&	attrDef,
            const SdaiPrimitiveH&	attrVal );
#endif
    // cree une copie du receveur dans le 'targetModel' (le modele courant par defaut)
    /** @nodoc */
    SdaiAppInstanceH CopyApplInstance ();
    /** @nodoc */
    SdaiAppInstanceH CopyApplInstance (SdaiModelH& targetModel);

    // effectue tous les controles de coherence sur le receveur
    /** @nodoc */
    virtual const SdaiLogical & ValidateInstance () const;

    // verifie que chaque attribut explicite du receveur est value
    /** @nodoc */
    virtual const SdaiBoolean & ValidateRequiredExplicitAttrsAssigned (CATLISTP(SdaiAttr)*&) const;

    // verifie que chaque attribut inverse du receveur verifie ses contrintes de cardinalite
    /** @nodoc */
    virtual const SdaiLogical & ValidateInverseAttrs () const;

    // verifie les regles d'unicite (se fait directement a partir
    // du modele)
    // const SdaiLogical& CompareAttrValues ( const SdaiAppInstanceH, const SDAIAGGRH( SdaiList,SdaiAttrH ) ) const ;

    //	virtual const SdaiLogical & ValidateUniquenessRule ( const SdaiString& ruleName ) const;
    //	virtual const SdaiLogical & ValidateUniquenessRule ( const SdaiUniquenessRuleH& ruleDef ) const;

    // verifie les regles WHERE du receveur
    /**
     * Checks the WHERE rule of the receiver.
     *  @param ruleName - the name of the rule
     *  @return
     *   <br><b>Legal values</b>
     *   <dl>
     *     <dt>SdaiTRUE</dt>
     *     <dd>Rule is verified</dd>
     *	  <dt>SdaiFALSE</dt>
     *     <dd>Rule is not verified</dd>
     *	  <dt>sdaiUNKNOWN</dt>
     *     <dd>Rule can not be verify</dd>
     *   </dl>
     *
     */
    virtual const SdaiLogical & ValidateWhereRule ( const SdaiString& ruleName ) const;
    /** @nodoc */
    virtual const SdaiLogical & ValidateWhereRule ( const SdaiWhereRuleH& ruleDef ) const;

    // verifie que les attributs de type reference du receveur sont du bon type
    /** @nodoc */
    virtual const SdaiLogical & ValidateExplicitAttrsReferences () const;

    // verifie que les attributs de type agregat du receveur ont une taille conforme a la specif.
    /** @nodoc */
    virtual const SdaiLogical & ValidateAggrSize (CATLISTP(SdaiAttr)*&) const;

    // verifie que les attributs de type UNIQUE agregat du receveur sont corrects
    /** @nodoc */
    virtual const SdaiLogical & ValidateAggrUniqueness () const;

    // conversion de type
    /** @nodoc */
    static	SdaiAppInstanceH	Castdown ( SdaiEntityInstanceH&		baseClass);
#ifndef	_WINDOWS_SOURCE
    /** @nodoc */
    static	const SdaiAppInstanceH	Castdown ( const SdaiEntityInstanceH&	baseClass);
#endif	// _WINDOWS_SOURCE

    /**
     * Creates a empty attribute of type aggregate.
     *  @param attName - the name of the attribute to create
     *  @return - the attibute created
     */
    SdaiAggrInstanceH CreateAggrInstance ( const SdaiString& attName);
    /** @nodoc */
    virtual SdaiAggrInstanceH CreateAggrInstance ( const SdaiExplicitAttrH& attrDef);

    /* Methode renvoyant le nom en clair de la classe */
    /** @nodoc */
    virtual const SdaiString &      GetInstanceTypeName()   const ;

    /**
     * Tests if an instance is of a specified type or one of the subtypes of this type.
     *  @param typeName - the type specified
     */
    virtual	const SdaiBoolean & IsKindOf	( const SdaiString&	typeName )  const;
    /** @nodoc */
    const SdaiBoolean & IsKindOf	( const SdaiEntityH&	typeEnt )  const;

    // determine si l'instance est d'un type donne.
    /** @nodoc */
    virtual	const SdaiBoolean &	IsInstanceOf	( const SdaiEntityH&	typeEnt )  const;

    /**
     * Tests if an instance is an instance of specified type.
     *  @param iString - the type specified
     */
    virtual	const SdaiBoolean &	IsInstanceOf	( const SdaiString&	iString )  const;

    /**
     * Gets the name of the type of an instance.
     *  @return - the name of the type
     */
    virtual	const	SdaiNamedTypeH	GetInstanceType ( )  const;

    // ****************************************************************************************
    // D S    O P E R A T I O N    D E C L A R A T I O N S
    // ****************************************************************************************
    public:
    /** @nodoc
     * make all the modification done in the CurrentContext available in the DriverContext
     */

    // renvoie le nom du schema de l'instance
    /** @nodoc */
    virtual const 	SdaiString &	GetInstanceSchemaName ()	const;

    // Fonction d'acces a l'identificateur de l'instance  - Ajout CCT -
    /** @nodoc */
    virtual const char * GetInstanceName () const ;
    /** @nodoc */
    virtual unsigned int GetInstanceNameId () const ;

    // ***** BACKUP *****: 
    // Retract        : l'etat courant est remplace par une sauvegarde 
    // Assert         : Suppression de sauvegardes intermediaires
    // Backup         : Sauvegarde
    // NumberOfBackup : Nombre de sauvegardes de l'instance
    // CurrentStatusId: Identificateur de l'etat courant (=numero de la prochaine sauvegarde)
    // TestBackup     : Teste si l'instance possede des sauvegardes
    /** @nodoc */
    unsigned char Retract(SdaiInteger s = BASE_SAVE);
    /** @nodoc */
    unsigned char Assert (SdaiInteger s = BASE_SAVE);
    /** @nodoc */
    unsigned char Backup ();
    /** @nodoc */
    SdaiInteger   NumberOfBackup();
    /** @nodoc */
    SdaiInteger   CurrentStatusId();
    /** @nodoc */
    unsigned char TestBackup() const;
    /** @nodoc */
    void	      DumpBackup() const;
    /** @nodoc */
    int	      BackupListSize() const;

    // Teste si l'etat courant de l'instance est marque detruit
    /** @nodoc */
    const SdaiBoolean & DeletedInstance() const;

    // Dump de l'instance  - Ajout CCT -
    /** @nodoc */
    void  DumpInstance( ostream& ) ;

    // determine si l'attribut a ete value ou mis a unset
    /** @nodoc */
    unsigned char	TestDefinedAttr	( const SdaiString&  att_name )  const;
    /** @nodoc */
    unsigned char	TestDefinedAttr	( const SdaiAttrH&  att_def )	const;

    // Remove the attribute value memory associated with this SDAI app instance
    /** @nodoc */
#define _SdaiAppInstUnloadAvail_ 1
    /** @nodoc */
    enum		UnloadMode { DefaultMode, RawMode };
    /** @nodoc */
  virtual void 		Unload( SdaiAppInstance::UnloadMode iMode );

    /* acces a l'implementation */
    /** @nodoc */
    inline  CATSdaiAppInstance *   AppInstance()  const { return  _AppInstance; }

    // ****************************************************************************************
    // I M P L E M E N T A T I O N
    // ****************************************************************************************
    protected :
    // Pointeur sur implementation
    /** @nodoc */
    CATSdaiAppInstance * _AppInstance;


    CATSmallAllocatorPerBlockDeclare

  public :
    /** @nodoc */
    virtual const SdaiBoolean &	FastTestAttr ( const SdaiAttrH&  ) const;
    /** @nodoc */
    virtual const SdaiPrimitiveH &	FastGetAttr ( const SdaiAttrH& ) const;


#ifdef SDAI_MULTI_TRANS_BCC    
public:
  /**
   * @nodoc
   */
    enum UndefMethod {
      ForceUndef,  // don't raise any errors, undefine all attribute values on the instance, possibly losing changes in other contexts.
      NormalUndef, // raise an error if undefining an attribute loses another context's changes. overwrite driver & current context changes silently.
      ContextUndef,// refresh current context, overwrite privates changes without raising an error.
      DriverUndef  // raise an error if undefining an attribute loses changes in current context.
    };
    /** @nodoc */
    void UndefInstance(SdaiAppInstance::UndefMethod how = SdaiAppInstance::ContextUndef);

  /**
   * @nodoc
   * Apps shouldn't have to use this service, it is only there for the purposes of SdaiStorableLog,
   * to find an attribute by its (block & rank) indices.
   *
   */
  SdaiAttrH AttrDef(int block, int val);
#endif
}; 

#ifdef SDAI_MULTI_TRANS_BCC    
/**
 * @nodoc
 * retrieves an AttrValue.
 *
 * This method is not to be used outside of SDMRuntime & SDAI_RDB.
 *
 * Low level method to gain access to an attribute value, this implements a copy on write
 * behaviour depending on the transaction context.
 * the AttrValue returned depends on the transaction context and on the intent (writing or reading).
 * if iCtxt is DriverTransactionContext, iForWrite is ignored and the value in _value_blocs (the default or
 * driver transaction context) is returned.
 * if the iCtxt is CurrentTransactionContext and iForWrite == 0 the AttrValue is the one in the
 * bloc corresponding to the current transaction. This may be the same as the one in the DriverTransactionContext 
 *  in some cases (if this value has not yet been modified in the current transaction).
 * 
 * If iCtxt is CurrentTransactionContext and iForWrite != 0 additional computation is done to implement a CopyOnWrite
 * mechanism between the DriverTransactionContext and all the additional transaction contexts.
 *
 * @param app       the instance for which the AttrValue will be returned
 * @param att_def   the attribute which is asked for
 * @param iForWrite indicates if this is used for writing or reading the attribute
 * @param iCtxt     the context for which the value needs to be returned (the Driver/Default context or the Current Context).
 *                  the DriverTransactionContext is called like that because the persistence driver is the only one 
 *                  which should ever access it directly
 *                  the CurrentTransactionContext is the default for this
 * @return the appropriate AttributeValue
 */

ExportedByKS0LATE CATSdaiAttrValue * AttrValueAccess(const SdaiAppInstanceH app ,const SdaiAttrH att_def, int iForWrite = 0, SdaiRoot::ContextSensitivity iCtxt = SdaiRoot::CurrentTransactionContext);
/** @nodoc */
ExportedByKS0LATE CATSdaiAttrValue * AttrValueAccessForUndef(const SdaiAppInstanceH app, const SdaiAttrH iAttDef,
                                                             SdaiAppInstance::UndefMethod meth, int& error_raised);

#else
// Recuperation d'un acces a la valeur d'un attribut dans une instance
/** @nodoc */
ExportedByKS0LATE CATSdaiAttrValue * AttrValueAccess(const SdaiAppInstanceH app ,const SdaiAttrH att_def);
#endif

// Fonction globale determinant si une SdaiEntityInstance est valide (renvoie sdaiTRUE)
// ou invalide [ == NULL !? ] (renvoie sdaiFALSE)
/** @nodoc */
ExportedByKS0LATE extern const SdaiBoolean &	EXISTS ( const SdaiAppInstanceH ) ;


// Global function to toggle on/off optimisation for cartesian points:
// Non null value = on, 0 = off.
/** @nodoc */
ExportedByKS0LATE void setCartesianPointOptim(int on);

// Global function to know if optimisation for cartesian points:
// 1 if on, 0 if off.
/** @nodoc */
ExportedByKS0LATE int getCartesianPointOptim();

# endif	/* _SDAI_APP_INSTANCE_H_ */





/* -*-c++-*- */
#ifndef CATDocument_H
#define CATDocument_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "CATObject.h"
#include "CATTime.h"
#include "CATUnicodeString.h"
#include "CATContainersInSession.h"
#include "booleanDef.h"
#include "sequence_octet.h"
#include "sequence_CATBaseUnknown_ptr.h"
#include "CATILinkableObject.h"
#include "CATIContainer.h"
#include "CosDataObject.h"
#include "booleanDef.h"
#include "AC0XXLNK.h"
#include "CATListOfInt.h"
#include "CATListPV.h"
#include "CATIDocEvents.h"
#include "CATIStorageProperty.h"
#include "CATDocumentsInSession.h"
#include "CATLISTP_CATIDocId.h"

class CATFrmEditor ;
class CATStreamArea ;
class CATDocumentToken ;
class CATStorage;
class CATIDocEnvironment;
class CATDocumentProperty;
class CATIDataProvider;
class CATIDocId;
class CATDocumentPrivateData;
class CATILockBytes;

/** @nodoc */
enum CATNamingConvention {DocumentBasedNaming=0, ComponentBasedNaming=1};

/**
 * Class to contain the data of your model.
 * <b>Role:</b>This class represents the document. But main methods to handle a document are  
 * found in interfaces such as: @href CATInit, @href CATIEditor, @href CATIDocAlias .... 
 *<br>To open, save,retrieve a document see the methods defined in @href CATDocumentServices 
 * (in batch mode) or the interface <ii>CATIIniInteractiveSession</ii> found in 
 * InteractiveInterfaces Framework (in interactive mode).
 * <br>The life cycle of a document is explained in @href CATDocumentServices. 
 */
class ExportedByAC0XXLNK CATDocument : public CATObject
{
  friend class CATDocumentPrivateData;

public:

  //-------------------------------------------------
  // 'tors
  //-------------------

  // The CATDocument::Create methods are meant for INTERNAL USE ONLY
  // to create a document you should use services such as CATDocumentServices::New
  // or CATDocumentServices::Open. 
  
  //For internal use only
  /** @nodoc */
  static  CATDocument*         Create(	CATClassId        TypeDocument, 
										const SEQUENCE( octet )& UUID,
										char* 	         storageName = 0 ) ;
  //For internal use only
  /** @nodoc */
  static  CATDocument*         Create(	CATClassId TypeDocument, 
										char* 	  storageName = 0 ) ;
  //For internal use only
  /** @nodoc */
  static  CATDocument*         Create(	const CATIStorageProperty_var& StgProp, 
										char* 	  storageName = 0 ) ;
  /** @nodoc */
  virtual ~CATDocument() ; 
  
private:

  CATDocument( const CATDocument& );	// not implemented
  CATDocument& operator=( const CATDocument& );	// not implemented

public:

  //-------------------------------------------------
  // Update private Data
  //------------------------
  /** @nodoc */
  virtual void            AddContainerToDocument   ( CATIContainer*       Icont ) ;
  /** @nodoc */
  virtual void            RemoveContainerToDocument( const CATIContainer* container ) ;
  // To change the storage name of the document : to be used only if the document
  // is completly loaded to avoid loss of data during save.
  /** @nodoc */
  virtual void            storageName( char* storageName );
  /** @nodoc */
  virtual void		      IncreaseEditorMeter (int Incr = 1) ; // increase or decrease
  /** @nodoc */
  virtual void		      SetWindowsMeter (int Incr = 1) ; // increase or decrease

  //-------------------------------------------------
  // Access private Data
  //------------------------
  /** @nodoc */
  virtual SEQUENCE(octet)					uuid () const ;
  /** @nodoc */
  virtual char*								storageName () const ;
  /** @nodoc */
  virtual int								EditorMeter () const ;
  /** @nodoc */
  virtual int								WindowsMeter () const ;
  /** @nodoc */
  virtual const CATLISTP(CATIContainer)&	ListContainer() const ;

  /** @nodoc */
  boolean 									IsNamed(const CATUnicodeString& name) const;
  /** @nodoc */
  int 										IsNull() const;

  // --------------------------------------------------
  // CreationMode is used to know wether the document is the first one or not
  // --------------------------------------------------
  /** @nodoc */
  HRESULT	SetCreationMode( int CreationMode);
  /** @nodoc */
  HRESULT	GetCreationMode( int &CreationMode);

  //-------------------------------------------------
  // Services OLE
  //-----------------------
  /** @nodoc */
  CATUnicodeString   displayName () const;
  /** @nodoc */
  void               displayName(CATUnicodeString displayName);
  /** @nodoc */
  boolean            IsEmbedded ();

  // ------------------------------------------------------
  // Document Embedde Dans Un Document CNEXT (Service Interne !!!)
  //-------------------------------------------------
    /** @nodoc */
	boolean			IsCATEmbedded (); // Is it embedded?
	// the document (this) is embedded in another CATDocument
	/** @nodoc */
    HRESULT			GetEmbedConnection ( CATDocument*& oEmbeddingDoc, int& oConnectionNb); // returns E_FAIL if not embedded

  // ----------------------------------------------------------
  // CNEXT EMBEDDING BEHAVIOUR
  // ----------------------------------------------------------
	// the document (this) is embedding another document
	/** @nodoc */
    HRESULT			AddEmbeddedDocument ( CATDocument& EmbeddedDoc, int DefaultConnection = 0);
	/** @nodoc */
    HRESULT			RemoveEmbeddedDocument( CATDocument& FormerEmbeddedDoc);
	// oEmbeddedDocs: output value
	/** @nodoc */
    HRESULT GetEmbeddedDocuments( CATLISTP(CATDocument)& oEmbeddedDocs );

  // -------------------------------------------------------------
  // Storage Valuation (internal Services!!)
  // -------------------------------------------------------------
	/** @nodoc */
    HRESULT			SetStorage ( CATStorage* Stg);
	/** @nodoc */
    HRESULT			GetStorage ( CATStorage*& Stg);

  // Gestion ecriture 
  //-----------------------
  /** @nodoc */
  boolean            DocReadOnly();
  /** @nodoc */
  boolean            ComputeReadOnly();
  // La methode ci-dessous est utilisee au fileOpen si le bouton ReadOnly est
  // activee
  /** @nodoc */
  void               SetReadOnly(boolean access);
  
  
  //-------------------------------------------------
  // timer of last modification
  //----------------------------
  /** @nodoc */
  void SetModificationTimer (CATTime ModificationTime) ;

  //-------------------------------------------------
  // dirty
  //------
  /** @nodoc */
  void SetDirty(boolean dirty);
  
  /** @nodoc 
   * This method solves the problem of new containers created "between two transactions":
   * we add the same number of transactions on the document to these new created containers.
   * This method have to be called by user when he has initialized these new containers.
  */
  HRESULT AddTransactionsOnNewContainers( CATIContainer* container );
  
  /** @nodoc */  
  HRESULT GetListContainerToSave(CATLISTP(CATIContainer) &oListContainerToSave);


  //-------------------------------------------------
  // document list which save call is needed
  //-----------------------------------------
  /** @nodoc */
  const CATLISTP(CATDocument)*		GetListDocumentToSave () ;
  /** @nodoc */
  void								SetDocumentToSave (CATDocument* DocToSave) ;
  /** @nodoc */
  void								RemoveDocumentToSave (CATDocument* DocToSave);
  
  
  // CreateIfNecessary is dedicated only to internal services
  /** @nodoc */
  const CATLISTP(CATDocument)*	IsPointedBy (boolean CreateIfNecessary=TRUE) ;
  /** @nodoc */
  boolean						IsPointedBy (CATDocument* Document) ;

  /** @nodoc */
  const CATLISTP(CATDocument)*	IsPointingAt () ;
  /** @nodoc */
  boolean						IsPointingAt (CATDocument* Document) ;


  //-------------------------------------------------
  // recovery compound container
  //--------------------------------------- 
  /** @nodoc */
  CATIContainer_var GetCompoundContainer () ;



      //------------------------------------------------//
      //												//
      //		INTERFACE								//
      //												//
      //------------------------------------------------//

  //-------------------------------------------
  // interface CATIDocument
  //----------------------------
  /** @nodoc */
  CATUnicodeString							GetType() const;

  /** 
  * Retrieves the document identification element.
  *<br><b>Note:</b>The document identification element contains three information: document environment + document type + document identifier. See @href CATIDocId.
  * @param oDocId 
  *     The document identification element.
  * @return
  *	S_OK: the CATIDocId has been retrieved successfully.
  *	<br> E_FAIL: the operation failed.
  */
  HRESULT GetDocId(CATIDocId ** oDocId);

  /** 
  * Returns the complete access name of the document.
  *<br><b>Note:</b>The complete access name is: path + name of the document + suffix where: 
  * <br>The suffix is dedicated to the document's type (CATPart, CATProduct, ...).
  * <br>In interactive mode, the name of the document is displayed in the document's window.
  * <br>The path is the complete path of the directory which contains the file.   
  */
  CATUnicodeString							StorageName () const ;

  /** 
  * Returns the display name of the document.
  *<br><b>Note:</b>The display name might be different from storage name (as storage name might be meaningless for user) 
  *<br> For instance it could be just the name of the document, not the whole path (environment are dealing with meaningfull user name)
  */
  CATUnicodeString DisplayName () const;

  /** @nodoc */
  HRESULT GetDocEnvironment ( CATIDocEnvironment** oDocEnv );

  /** @nodoc */
  CATDocument* GetCATDocument(); 
  
  //-------------------------------------------
  // partie interface CATInit
  //----------------------------
  /** @nodoc */
  virtual void				Init( boolean        DestroyExistingData ) ;
  /** @nodoc */
  virtual CATBaseUnknown*	GetRootContainer( const CATIdent interfaceID ) ;



  
  //-------------------------------------------
  // partie interface CATIPersistent
  //-----------------------------------
  /** @nodoc */
  virtual boolean             Dirty() ;
  /** @nodoc */
  virtual void                Save() ;
  /** @nodoc */
  virtual void                SaveAs_B(SEQUENCE( octet ) storageName,boolean becameCurrent) ;
  /** @nodoc */
  virtual void                Load_B( SEQUENCE( octet ) storageName, boolean readOnly ) ;
  /** @nodoc */
  virtual void                SaveAs( char* storagePrintableName, boolean becameCurrent ) ;
  /** @nodoc */
  virtual void                Load( char* storagePrintableName, boolean readOnly ) ;
  
  
  //-------------------------------------------
  // partie interface CATIContainer
  //-------------------------------
  /** @nodoc */
  virtual SEQUENCE( CATBaseUnknown_ptr ) ListMembers ( const CATIdent interfaceID ) ;
  /** @nodoc */
  virtual CATLONG32                ListMembersHere ( const CATIdent interfaceID,
				                SEQUENCE( CATBaseUnknown_ptr )& list) ;
 
  //-------------------------------------------
  // partie interface LifeCycleObject
  //----------------------------------
  /** @nodoc */
  virtual void                remove()  ;
  //pour LifeCycleObject migration
  /** @nodoc */
  virtual void                remove(int context)  ;

  
  
  //-------------------------------------------
  // partie interface CATILinkableObject
  //--------------------------------------
  /** @nodoc */
  virtual SEQUENCE(octet)     GetLastModificationId() ;
  /** @nodoc */
  virtual CATBaseUnknown*     GetNamingContext( CATIdent interfaceID ) ;
  /** @nodoc */
  virtual CATISymbolicLink*   GetSymbolicLink() ;
  /** @nodoc */
  virtual void                GetIdentifier( SEQUENCE(octet) identifier
					    ,boolean IsAnUuid);
  /** @nodoc */
  virtual CATDocument*        GetDocument();
  /** @nodoc */
  virtual SEQUENCE(octet)     GetLocatorType();
  /** @nodoc */
  virtual SEQUENCE(octet)     GetAdditionalInfos();

  /** @nodoc */
  virtual void  ListSupportedAreasIdentifier( CATListOfCATUnicodeString* listofareasidentifier
					     ,boolean& IsAStaticList);
  
  /** @nodoc */
  virtual boolean IsAFilledArea(const CATUnicodeString& area_identifier);
  
  /** @nodoc */
  virtual void  FillArea( const CATUnicodeString& area_identifier
			 ,SEQUENCE(octet)         pointed_name
			 ,boolean                 updateIfAlreadyExist);

  /** @nodoc */
  virtual CATLISTV(CATBaseUnknown_var) ExternalBindPointedObjects( const CATIdent interfaceId
								      ,CATIBindParameters* params);
  

  /** @nodoc */
  virtual boolean             OverloadLocatorType();
  /** @nodoc */
  virtual void  SetLocatorType(const SEQUENCE(octet)& locatortype);
  
  
  //-------------------------------------------
  // CATIEditor interface
  //-----------------------
  /** @nodoc */
  virtual CATFrmEditor*       GetEditor() ;


  //-------------------------------------------
  // partie interface CATIDataObject
  //----------------------------------
    /** @nodoc */
    virtual void     ExportData  ( format selected_format , CATStreamArea* where ) ;
    /** @nodoc */
    virtual Formats  ListFormats ();
    /** @nodoc */
    virtual boolean  QueryGetData( format selected_format ); 


  //-------------------------------------------
  // partie interface CATIDocRoots
  //-------------------------------
    /** @nodoc */
    virtual CATLISTV(CATBaseUnknown_var)*GiveDocRoots()  ;
    /** @nodoc */
    virtual void                         FeedDocRoots(CATBaseUnknown_var root) ;


  //-------------------------------------------
  // CATIBackup
  //--------------
    /** @nodoc */
    virtual CATLONG32 Rollout() ;
    /** @nodoc */
    virtual CATLONG32 Rollin() ;
 
  
  //-------------------------------------------
  // CATITime
  //--------------
    /** @nodoc */
    virtual CATTime GetTimeStamp () ;
    /** @nodoc */
    virtual void SetTimeStamp (CATTime NewTime) ;
 
  
  //-------------------------------------------
  // Naming Convention
  //--------------
    /** @nodoc */  
    HRESULT GetNamingConvention (CATNamingConvention &oNamingConvention) const;

    /** @nodoc */
    HRESULT RequestChangeOfNamingConvention ();

  //-------------------------------------------
  // Document Private data
  //--------------
    /** @nodoc */  
    CATDocumentPrivateData* GetPrivateData();


  //----------------------------------------
  // Update called CATIEditor interface
  //-----------------------------------
  /** @nodoc */
  void SetClsIdEditor (const CLSID& MyClsId) ;
  /** @nodoc */
  const CLSID& GetClsIdEditor () ;

  //----------------------------------
  // Update Save flag
  //___________________
  /** @nodoc */
  boolean  IsSaved () ;
  /** @nodoc */
  void SetSaveFlag (boolean saveFlag = TRUE) ;
  
  //----------------------------------
  // Services lies a l'undo multi-docs
  //----------------------------------

  /** @nodoc */
  void AddDocForUndo(CATDocument* doc);
  /** @nodoc */
  void RemoveDocForUndo(CATDocument* doc);
  /** @nodoc */
  const CATLISTP(CATDocument)& GetDocsForUndo() const;

  //----------------------------------
  // Services lies a l'undo avec ajout de containers
  //----------------------------------

  //Give a list of containers which adhere to CATIUndoTransaction
  /** @nodoc */
  const CATListPV * GetContainersForUndo();

  //Recursively add container as CATIUndoTransaction
  /** @nodoc */
  void AddContainerForUndo(CATIContainer* cont);


  // Document Property (-- internal services --)
  // CreateIfNecessary is dedicated only to internal services
  /** @nodoc */
  CATDocumentProperty* GetDocumentProperty(boolean CreateIfNecessary=TRUE );
  /** @nodoc */
  CATIStorageProperty_var GetDocumentDescriptor ();
  
  // BASIC PROPERTIES CREATION
  /** @nodoc */
  HRESULT UpdateProperties ();

  /** @nodoc */
  HRESULT SetDocEnvironment ( const CATIDocEnvironment* iDocEnv );

  /** 
  * @nodoc 
  * Sets the document identification element.
  *<br><b>Note:</b>The document identification element contains three information: document environment + document type + document identifier. See @href CATIDocId.
  * @param iDocId 
  *     The document identification element.
  * @return
  *	S_OK: the CATIDocId has been set successfully.
  *	<br> E_FAIL: the operation failed.
  */
  HRESULT SetDocId(CATIDocId * iDocId);

  // Lock mechanism (internal use only)
  /** @nodoc */
  int AddRefForLock();
  /** @nodoc */
  // please never use iRemoveIfNecessary = FALSE
  int ReleaseForLock(boolean iRemoveIfNecessary = TRUE);
  /** @nodoc */
  int IsLocked();
  /** @nodoc */
  int IsUnderRemove();
  
  /** @nodoc */
  HRESULT IsRemovable(boolean &MustFlushClipBoard);
  /** @nodoc */
  static int GetNumDocUnderRemove();

  /** @nodoc */
  void SetSaveTime();
  /** @nodoc */
  boolean SaveOperationAllowed();

  //	LATE TYPING
  //	-----------
  /** @nodoc */
  CATDeclareLateTyping;

  //
  // --> Gestion des relations Document <-> Container
  //
  /** @nodoc */
  static CATDocument* GetDocumentOfContainer( const CATIContainer* container ) ;

  /** @nodoc */
  HRESULT SetDataProvider(CATIDataProvider *iDataProvider);
  /** @nodoc */
  HRESULT GetDataProvider(CATIDataProvider **oDataProvider); 

  /** @nodoc */
  void SetLogState(boolean iState);
  /** @nodoc */
  boolean GetLogState(); 

  // Service to block all save operations on the document
  /** @nodoc */
  void LockSave();
  // Service to recover the LockSave state : if 0 --> the document can be saved
  //										 if 1 --> the document cannot be saved
  /** @nodoc */
  short GetLockSaveState();

  // Services to set and get the ILockBytes of the document when opened from a memory buffer.
  /** @nodoc */
  HRESULT SetILockBytes(CATILockBytes *iILB);
  /** @nodoc */
  HRESULT GetILockBytes(CATILockBytes **oILB);
 
protected:
  //
  // --> Gestion du premier element des relations Document <-> Container
  //
  friend class CATDocumentToken ;
  
  static CATDocumentToken* GetTokenHead() ;
  static void              SetTokenHead( CATDocumentToken* token ) ;

  CATDocument(	CATClassId        Typedocument, 
				const SEQUENCE( octet )& UUID,
				char* 	         storageName = 0 ) ;
  CATDocument(	CATClassId Typedocument, 
				char* 	  storageName = 0 );

  //Constructeur avec SuperType
  CATDocument(CATClassId Typedocument, CATClassId SuperType, char* storageName = 0 );

  //  EMBED INSIDE A CATDOCUMENT
  // EMBEDDED BEHAVIOUR (this is embedded inside EmbeddingDocument)
  HRESULT			SetEmbedConnection ( CATDocument* EmbeddingDocument, int ConnectionNb);
  HRESULT			RemoveEmbedMode ();

  //===========================
  //	DATA
  //===========================

  SEQUENCE( octet )     uuid_ ;
  SEQUENCE( octet )		locatortype_ ;
  int                   EditorMeter_ ; // test an editor on the document
  int                   WindowsMeter_ ; // test a graphical view on the document
  char*	        		storageName_ ;
  CATTime				RollTimeStamp_ ;

  // donnee temporaire dans l'attente de faire porter cette information
  // par les containers.  
  CATTime				LastModifTime_ ;

  // Pour gerer les acces disque concurrents
  CATTime                               SaveTimeStamp_ ;

  CATLISTP (CATDocument)    ListDocsForUndo_;
  CATListOfInt				ListDeltaForUndo_;

  CATUnicodeString          displayName_ ;
  CATUnicodeString          _StorageName ;
  CATLISTP( CATIContainer )	ListContainer_ ;
  CATLISTV(CATBaseUnknown_var)* listroots_;
  
  boolean SaveFlag_ ;
private :
  boolean					_read_only;
  boolean					_LogState;

protected:  /** @win64 fbq : 64-bit structure padding **/
  int					CreationMode_; 
  CLSID   EditorIntfClsId_ ;

  // Properties
  // -----------
    
	// Document property: List of pointed objects ( list of CATISymbolicLink_var)
	CATDocumentProperty*	_DocumentProperty;   // information redondante
												 // debut de migration pour les perfos  mbv jul 99
	


    // DOCUMENT EMBEDDED INSIDE A CNEXT DOCUMENT (<> OLE EMBED !!!)
	CATDocument*		EmbeddingDoc_; // useful for embedded storage creation (cf CATStorageManager)
	int					EmbedConnection_;

    // EMBEDDING BEHAVIOUR
	int						NbOfEmbeddingDoc_;
	CATLISTP (CATDocument)  ListEmbeddingDocument_ ;

	// STORAGE
	CATStorage*				CorrespondingStg_;

	int _mcRefForLock;
	int _IsUnderRemove;
	
private :
  static CATDocumentToken*  _token_head ;  
  CATListPV *				_undo_containers;
  CATIDocEnvironment*		_doc_env;
  static int _mcRefForDocUnderRemove;
  CATIDataProvider* _dataProvider;
  CATILockBytes *_ILB; // used for documents opened from a memory buffer to allow partial load
 
  CATDocumentPrivateData* _PrivateData;
  
  CATNamingConvention _NamingConvention;

protected: /** @win64 fbq : 64-bit structure padding **/
	// Is null?
	short _IsNull;
	
private:  
  short		_SaveLocked;

} ;   


#endif



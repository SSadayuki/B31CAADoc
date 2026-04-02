#ifndef CATRep_H
#define CATRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h"
#include "CATGraphicAttributeSet.h"
#include "CATModelIdentificator.h"
#include "CATViz.h"
#include "list.h"
#include "CATSysAllocator.h"
#include "CATMultiThreadCullingAlgorithm.h"
#include "CATBoundingElement.h"
#include "CATMutex.h"
#include "CATVizGlobals.h"
#include "CATGPIterator.h"

class CATManipulator;
class CATPathElement;
class CATRender;
class CATRepPath;
class l_CATVisManager;
class CATGraphicMaterial;
class CATMappingOperator;
class CATGraphicPrimitive;
class CATVisuController;
class CATRepWeakRef;

// MPCulling
#ifndef CULLING_REPARTITION
class CATMPRenderingFlags;
#endif


/**
 * cf @href #SetInheritanceMode RESET_INHERITANCE     : Stop all inheritance
 */
#define RESET_INHERITANCE          0

/**
 * cf @href #SetInheritanceMode COLOR_INHERITANCE     : Activate color inheritance
 */
#define COLOR_INHERITANCE       4100 // a la fois ALPHA_INHERITANCE_ON (4096) et COLOR_INHERITANCE_ON (4)

/**
 * cf @href #SetInheritanceMode LINEWIDTH_INHERITANCE : Activate line width inheritance
 */
#define LINEWIDTH_INHERITANCE     16

/**
 * cf @href #SetInheritanceMode LINETYPE_INHERITANCE  : Activate line type inheritance
 */
#define LINETYPE_INHERITANCE      64

/** @nodoc */
#define REP_VIEW_DISABLED     0x0
/** @nodoc */
#define REP_VIEW_MESH         0x1
/** @nodoc */
#define REP_VIEW_EDGE         0x2
/** @nodoc */
#define REP_VIEW_OUTLINE      0x4               
/** @nodoc */
#define REP_VIEW_HRD          0x20              
/** @nodoc */
#define REP_VIEW_HIDDEN_EDGE  0x40              
/** @nodoc */
#define REP_VIEW_POLYGON      0x80  //0x8
/** @nodoc */
#define REP_VIEW_NOTHING      0x100 //0x4
/** @nodoc */
#define  REP_VIEW_WITH_HALF_SMOOTH_EDGE (0x1000)
/** @nodoc */
#define  REP_VIEW_WITHOUT_SMOOTH_EDGE   (0x2000)
/** @nodoc */
#define  REP_VIEW_WITHOUT_VERTEX        (0x8000)
/** @nodoc */
#define  REP_VIEW_WITHOUT_WIRES         (0x20000)
/** @nodoc */
#define  REP_VIEW_WITHOUT_AXIS          (0x40000)
/** @nodoc */
#define  REP_VIEW_WITHOUT_POINTS        (0x80000)

/** @nodoc */
#define REP_PICK_MESH        0x1
/** @nodoc */
#define REP_PICK_EDGE        0x2
/** @nodoc */
#define REP_PICK_NOTHING     0x4


/** @nodoc
 *  This values define the heritance mode for material
 *  MATERIAL_NOT_HERIT, the material is not considerated under this rep in the tree
 *  MATERIAL_HERIT, all the children reps will herit from this rep's material
 *  MATERIAL_FORCE, has the same effect than HERIT, but it will be taken even if a father
 *                  has the HERIT flag activated (used by Shape Analysis)
 *
 * Material inheritance flag management methods are defined in CATRep and not
 * int CAT3DRep because their management are done in the Draw methods.
 */
/** @nodoc */
#define MATERIAL_NOT_INHERIT    0
/** @nodoc */
#define MATERIAL_INHERIT        1
/** @nodoc */
#define MATERIAL_FORCE_INHERIT  2

/**
 * Class to create a representation of an application object.
 * <b>Role</b>: This class is the base class for all representation classes,
 * necessary to visualize application objects.
 * Representations are organized into representation trees, possess graphic
 * attributes, and can be manipulated. This class defines these three basic
 * behaviors. <br>
 * Predefined representations (for two dimensions and three dimensions spaces)
 * are available and should satisfy most of your needs. <br>
 */
class ExportedByCATViz CATRep : public CATBaseUnknown
{
  friend class CATMarshallableRep;
  friend class CATDmuStreamRep;
  /** @nodoc 
   * 
   */
  friend class l_CATVisManager;
  friend class CATRepWeakRef;
  
  /** @nodoc */
  CATDeclareClass;
  
  
public:

  /** @nodoc */
   void *operator new(size_t iSize,void *iAllocType=NULL,
                      void *iAddr=NULL,int iReservedSize=0);
   
  /** @nodoc 
   *  Surcharge de l'operateur delete pour gerer un compteur de reference interne aux reps
   *  et pouvoir detecter les cas ou une rep est mal detruite.
   */
  void operator delete (void *iPtr);
  
#ifdef _WINDOWS_SOURCE
  /** @nodoc */
   void operator delete(void *iAddr,void *iAllocType,
                        void *iRefAddr,int iReservedSize);
#endif

  /** @nodoc */
  virtual ULONG   __stdcall AddRef();
  /** @nodoc */
  virtual ULONG   __stdcall Release();

  virtual ~CATRep();

  /** @nodoc */
  void UnreferenceRepFromManager(int i2DRep = 0);


  /** @nodoc */
  virtual void Empty();

  /** Deletes the representation. Do not use the <tt>delete</tt> operator for this purpose. */
  virtual void Destroy();
    
  /** Constructs a representation. */
  CATRep();

  /** @nodoc : deprecated constructor. */
  CATRep(CATModelIdentificator & iModelID,
         void     * iController = NULL);
#ifdef CATIAV5R26
  /** Constructs a representation. */
  static CATRep* CreateRep();
#endif
  /**
   * Returns the list of children representations, if it exists.
   * The class remains owner of the list. Do not delete the list.
   */
  
  virtual list<CATRep> * GetChildren();

  /**
   * @nodoc
   * You can use @href #GetRepParents or @href #GetParentListCopy
   */
  virtual list<CATRep> * GetParents();

  /** 
   * Returns the number of parent representations.
   */
  virtual int GetNbParents() const;

  /** 
   * Iteration method to retreive the parent representations.
   * @param index
   *   the index of the parent representation you want to retrieve from the list of parents.
   * @return NULL if index is negative or equal or superior to the number of parents
   * The returned CATRep remains owned by this object . Do not delete it.
   */
  virtual CATRep* GetRepParents(int index) const;

  /** 
   * Returns a list of parent representations.
   * The class is not owner of the returned list. It is your responsability to delete the list.
   */
  virtual list<CATRep>* GetParentListCopy() const;


  /** Adds a specific representation to the list of parents.
   * @param iParentRep
   * The parent rep to be added.
   */
  virtual void AddParent(CATRep & iParentRep);

  /**
   * Removes a specific representation from the list of parents.
   * @param iParentRep
   * The parent rep to be removed.
   */
  virtual void RemoveParent(CATRep & iParentRep);

  /**
   * Adds a child graphic representation. 
   *<br>
   *<b>Role</b>: This method is not implemented on the current class.
   * @param iRep
   * Child representation to be added.
   */
  virtual HRESULT AddChild(CATRep & iRep);

  /** Removes a child representation.
   *<br>
   *<b>Role</b>: This method is not implemented on the current class.
   * @param iRep
   * Child representation to be removed.
   */
  virtual void RemoveChild(CATRep &iRep);

  /**
   * Removes a child representation but does not compute the new bounding element.
   *<b>Role</b>: This method is not implemented on the current class.
   *	@param iRep
   * Child representation to be removed.
   */
  virtual void RemoveChildren  (CATRep &iRep);

  /** Returns the associated set of graphic attributes. 
    * @nodoc
    * use void GetGraphicAttributeSet(CATGraphicAttributeSet& oAttributeSet) method instead to get the attribut
    * or void SetGraphicAttributeSet(const CATGraphicAttributeSet& iGraphicAttributeSet) to set it.
    */
  inline CATGraphicAttributeSet & GetGraphicAttributeSet();
#ifdef CATIAV5R26
  /** Retrieves the associated set of graphic attributes. */
  inline void GetGraphicAttributeSet(CATGraphicAttributeSet& oAttributeSet) const;
#endif
  /**
   * Sets the associated set of graphic attributes.
   * @param iGraphicAttributeSet
   * The set of graphic attributes for the representation.
   */
#ifdef CATIAV5R26
  void SetGraphicAttributeSet(const CATGraphicAttributeSet & iGraphicAttributeSet);
#else
inline void SetGraphicAttributeSet(const CATGraphicAttributeSet & iGraphicAttributeSet);
#endif
  /** @nodoc : deprecated method. */
  virtual void SortGraphicAttributeSet();

  /** Indicates that the representation is hidden. */
  virtual int IsHidden();

  /** @nodoc */
  inline int IsShowFree() {return _the_Visu_Attributs.IsShowFree();};

   /** @nodoc */
  virtual int IsInvalid();

   /** @nodoc */
  virtual void SetInvalid();
  /**
   * Sets the transparency mode graphic attribute.
   * @param iTransparentMode
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 : transparency is disabled </li>
   *<li> 1 : transparency is eneabled </li>
   * </ol>.
  */
  virtual void SetTransparentMode(unsigned int iTransparentMode);

  /**
   * Sets the highlight mode of the representation.
   * @param iHighlightMode
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   * @param iPropagationMode
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   */
  virtual void SetHighlightMode(int iHighlightMode,
                                int iPropagationMode = 0);

  /** 
   * Sets the show mode of the representation.
   * @param iShowMode
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   * @param iPropagationMode
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   */
  virtual void SetShowMode(int iShowMode,
                           int iPropagationMode = 0);
  
  /**
   * Sets the color of the representation.
   * @param iColor
   *  The index of the color. You can use predefined color 
   * see @href CATPredefinedColorName
   */
  virtual void SetColor(unsigned int iColor);

  /** Sets the color of the representation, in RGBA notation.
   * @param iRed
   * The red component of the color must be in the range [0,255].
   * @param iGreen
   * The green component of the color must be in the range [0,255].
   * @param iBlue
   * The blue component of the color must be in the range [0,255].
   * @param iAlpha
   * The opacity component of the color must be in the range [0,255].
   */
  virtual void SetColorRGBA(unsigned int iRed,
                            unsigned int iGreen,
                            unsigned int iBlue,
                            unsigned int iAlpha = 255);

  /** Sets the line type used for drawing lines of the representation.
   * @param iLineType
   * Legal values are :
   * <ol>
   *<li> 1 :  solid</li>
   *<li> 2 :  dotted</li>
   *<li> 3 :  dashed</li>
   *<li> 4 :  dot-dashed</li>
   *<li> 5 :  phantom</li>
   * </ol>
   */
  virtual void SetLineType(unsigned int iLineType);

  /** Sets the thickness used for drawing lines of the representation.
   * @param iThickness
   * Indicates the index width of the line in the range [1,55].
   * This index is pointing on the true width in pixel, recorded in the standard
   * (if there is one in the document) or in the setting.
   */
  virtual void SetThickness(unsigned int iThickness);

  /** Sets the thickness used for drawing lines of the representation.
   * @param iThickness
   * Indicates the width of the line in pixels in the range [1,8].
   */
  virtual void SetFixedThickness(unsigned int iThickness);

  /** Sets the lowlight mode of the representation.
   * @param iLowlightMode
   * <ol>
   *<li> 0 : representation is drawn normally </li>
   *<li> 1 : representation is drawn in lowlight </li>
   * </ol>
   */
  virtual void SetLowlightMode(unsigned int iLowlightMode);

  /** Sets the pick mode of the representation.
   * @param iPickMode
   * <ol>
   *<li> 0 : representation is pickable </li>
   *<li> 1 : representation is not pickable </li>
   * </ol>
   */
  virtual void SetPickMode(unsigned int iPickMode);

  /** Sets the show free mode of the representation.
   * @param iShowFreeMode
   * <ol>
   *<li> 0 :  the show/noshow parameter of the representation is taken into account</li>
   *<li> 1 :  the show/noshow parameter of the representation is not taken into account</li>
   * </ol>
   */
  virtual void SetShowFreeMode(unsigned int iShowFreeMode);

  /** Sets the inheritance mode of the representation.
   * @param iInheritance
   * iInheritance is a Bitwise OR of masks that indicates the children reps will automatically have this rep's color or/and line width or/and line type attributes as specified by @href #SetGraphicAttributeSet method.
   * Legal values are :
   * <ol>
   *<li> RESET_INHERITANCE     : Stop all inheritance </li>
   *<li> COLOR_INHERITANCE     : Activate color inheritance </li>
   *<li> LINEWIDTH_INHERITANCE : Activate line width inheritance </li>
   *<li> LINETYPE_INHERITANCE  : Activate line type inheritance </li>
   * </ol>
   * RESET_INHERITANCE is used to stop the inheritance.
   */
  void SetInheritanceMode(unsigned int iInheritance);

  /** Returns the inheritance mode of the representation. */
  inline unsigned int GetInheritanceMode();
  
  /** @nodoc */
  void SetFiltered(unsigned int iFilter);
  /** @nodoc */
  unsigned int IsFiltered();

  /** @nodoc */
  virtual void SetGraphicMaterial(CATGraphicMaterial * iMaterial);

  /** @nodoc */
  virtual CATGraphicMaterial* GetGraphicMaterial() const;

  /** @nodoc */
  virtual unsigned int GetPLMRenderingStyle(unsigned int iPLMViewMode);

  /** @nodoc */
  virtual void UpdateTextureCoordinates(CATMappingOperator* iOperator = NULL);

  /** Sets the heritance mode for material.
   * @param iInheritance
   * <ol>
   *<li> MATERIAL_NOT_INHERIT : children reps will not have this rep's material </li>
   *<li> MATERIAL_INHERIT :  children reps will have automaticly this rep's material</li>
   *<li> MATERIAL_FORCE_INHERIT : same as INHERIT, but even when a father has the INHERIT flag</li>
   * </ol>
   */
  virtual void SetMaterialInheritance(int iInheritance);

  /** Returns the inheritance mode for the material of the rep. */
  virtual int GetMaterialInheritance();

  /** Sets the validity of texture coordinates.
   * @param iState
   * <ol>
   *<li> 0 : TC invalid, they will be computed at next Draw </li>
   *<li> 1 : TC valid </li>
   * </ol>
   */
  virtual void SetIsValidTC(int iState);
  
  /** Return the validity of texture coordinates.
   */
  virtual int GetIsValidTC();
    
  // Highlight management:
  // ---------------------
  //   - BuildHighlightLook: From a CATPathElement, defines the CATRepPath
  //     containing elements to highlight. Default behavior is to call the 
  //     BuildRepPath method.
  //   - BuildRepPath: Builds a CATRepPath from the given model path.
  /**
   * Sets the representation path for highlighted state (calls BuildRepPath by default).
   * @param iPathElement
   * 
   * @param oRepPath
   * 
   */
  virtual HRESULT BuildHightlightLook (const CATPathElement & iPathElement,
                                       CATRepPath           & oRepPath);

   /** @nodoc */
  virtual HRESULT BuildRepPath(const CATPathElement & iPathElement,
                               CATRepPath           & oRepPath);
    

  /** @nodoc */
  virtual void DrawShading   (CATRender & iRender, int iInside);

  /** @nodoc */
  virtual void DrawPath      (CATRender & iRender, int iInside, CATRepPath & iRepPath);

  /** @nodoc */
  virtual void Draw          (CATRender & iRender, int iInside);

  /** Tests whether the representation will draw its graphic primitives.
   * @return
   * <ol>
   *<li> 0 :  the representation must not be drawn</li>
   *<li> 1 :  the representation must be drawn</li>
   * </ol>
   * @param ioRender
   * The render used to draw the representation.
   * @param ioInside
   * This parameter indicates whether the representation is fully in the view frustrum.
   * Legal values
   * <ol>
   *<li> 0 :  the representation is fully or partially out of the view frustrum.
   *          Not all graphic primitives will be drawn.</li>
   *<li> 1 :  the representation is fully in the view frustrum.
   *          All graphic primitives will be drawn.</li>
   * </ol>
   */
  virtual int IsOkToDraw(CATRender & ioRender, int ioInside);
    
  /** Attach a manipulator to the representation.
   * @param iManipulator
   * Manipulator of the representation.
   */
  void SetManipulator(CATManipulator * iManipulator);

  /** Returns the manipulator of the representation. */
  CATManipulator * GetManipulator() const;
    

  /** Computes the bounding element of the representation.
   * The bounding element should be the smallest possible sphere containing the representation.
   * @param iShowSpace
   * <br><b>Legal Values</b>:
   * <ol>
   *<li> 0 :  </li>
   *<li> 1 :  </li>
   * </ol>
   */
  virtual void ComputeBoundingElement(int iShowSpace = 1);
    
  /** @nodoc : deprecated method. */
  void *GetControllerId() const;

  /** @nodoc : deprecated method. */
  void SetControllerId(void * iController);

  /** @nodoc : deprecated method. */
  virtual const CATModelIdentificator * GetIdentificator();

  /** @nodoc : deprecated method. */
  void SetNewId(CATModelIdentificator & iModelID);

  /** @nodoc */
  virtual void SetCGMId(unsigned int iId);

  /** @nodoc */
  virtual unsigned int GetCGMId();

  /** @nodoc */
  virtual void SetNamingContext(int iNamingContext);

  /** @nodoc */
  // 0 : pas de contexte
  // 1 : contexte feature
  // 2 : contexte CGM
  virtual int GetNamingContext();

  /** @nodoc */
  virtual void SetLayerNumber(int iLayer);

  /** @nodoc */
  virtual int GetLayerNumber();

  /** @nodoc */
  inline int GetRefNbr() const;


  /** @nodoc */
  virtual CATGraphicPrimitive* GetGeomElement(int iIndice);

  /** @nodoc */
  virtual int GetGeomIndex(const CATGraphicPrimitive * gp);
    
  /** @nodoc */
  // The only view mode accepted by this method are :
  // - REP_VIEW_NOTHING
  // - REP_VIEW_MESH
  // - REP_VIEW_EDGE
  // - REP_VIEW_MESH | REP_VIEW_EDGE
  // - REP_VIEW_POLYGON
  // If the CATViewer is set to one of this view mode, the rep view mode
  // won't be taken into account :
  // - VIEW_OUTLINE
  // - VIEW_HLR
  // - VIEW_POLYGON
  // - VIEW_ISOPARS
  // - VIEW_TOON
  virtual void SetViewMode (const int iViewMode, const int iActive,const int iWindowViewModeSensitive=0);

  /** @nodoc */
  virtual int ViewMode (const int oViewMode=0xFFFF,int * oWindowViewModeSensitive=NULL) const;

   /** @nodoc */
  // The only pick mode accepted by this method are :
  // - REP_PICK_NOTHING
  // - REP_PICK_MESH
  // - REP_PICK_EDGE
  // - REP_PICK_MESH | REP_PICK_EDGE
  // If the CATViewer is set to one of this view mode, the rep view mode
  // won't be taken into account :
  // - VIEW_OUTLINE
  // - VIEW_HLR
  // - VIEW_POLYGON
  // - VIEW_ISOPARS
  // - VIEW_TOON
  virtual void SetRepPickMode (const int iPickMode, const int iActive);

  /** @nodoc */
  virtual int GetRepPickMode (const int oPickMode=0xFFFF) const;

   /** @nodoc */
  virtual int IsA3DRep();

   /** @nodoc */
  virtual int IsAScissorRep() const;

   /** @nodoc */
  virtual float * GetScissorPolygon() const;

#if defined(_IRIX_SOURCE) || defined(_WINDOWS_SOURCE)
   /** @nodoc */
  virtual CATBoundingElement *GetBoundingCube (void) { return (CATBoundingElement *) -1; }
#endif



/**
 * @nodoc 
 * Returns a weak reference on the rep.
 * The Release method must be called on the weak reference when useless.
 * @return
 * A <tt>CATRepWeakRef *</tt>
 */
  virtual CATRepWeakRef * GetRepWeakRef( void );
  /** @nodoc */
  void SetRepWeakRef( CATRepWeakRef *iWeakRef );

#ifndef CULLING_REPARTITION
  /** @nodoc 
   *  MPCulling 
   *  param : if create !=0 , a standard CATMPCullingsFlags object is created
   *  if it does not already exist */ 
  CATMPRenderingFlags* GetMPRenderingFlags(short create);

  /** @nodoc
    * MPCulling
    */
  void ReleaseMPRenderingFlags();
#endif

  /** @nodoc */
  inline int IsASprite();

  /** @nodoc */
  inline void SetAsSprite(int iIsASprite);

  /** @nodoc */
  virtual unsigned int GetSizeInBytes();

  /** @nodoc */
  inline int IsIn3DBackground();
  /** @nodoc */
  inline void SetIn3DBackground(int iYesOrNo);

  /** @nodoc */
  static void SetSemanticLevel(CATVizSemanticLevel level);
  /** @nodoc */
  static CATVizSemanticLevel GetSemanticLevel();

  /**
   * @nodoc
   * Will be destroyed very soon (W18-W19 2K5).
   * Put here for internal migration purpose
   * DO NOT USE
   */
  inline HRESULT GetGPIterator(CATGPIterator ** oIterator);

protected:
  // data
  CATGraphicAttributeSet   _the_Visu_Attributs; // associated graphic attributes
  CATModelIdentificator    _the_Identificator;  // deprecated member
  CATManipulator         * _the_Manipulator;    // associated manipulator
  //unsigned int           _inheritanceMode;    // if TRUE, propagate attributes to chidren
  //unsigned int             _inheritanceMode : 31;
  //unsigned int             _multiple_fathers: 1;
  
  
    
  // a priori cette donne nést utilisee null part
  //int 		           sizeFatherList_;     // number of parent representations 
  //list<CATRep>             _the_Father_List;    // list of parent representations
  static CATMutex          *_lock_fatherList;
  union
  {
    CATRep*                _pFatherRep;
    list<CATRep>*          _pFatherList;
  };

  unsigned int  _inheritanceMode  : 28;
  unsigned int  _isin3dbackground :  1;
  unsigned int  _isasprite        :  1;
  unsigned int  _multiple_fathers :  1;
  unsigned int  _filtered         :  1;

  
/**
 * Cette methode effectue le dereferencement de la weakref associee a la rep.
 * Cette methode doit imperativement etre appelee par toute surcharge de Destroy ne rappelant pas CATRep::Destroy.
 */
  void UnreferenceWeakRef( void );


  // MPCulling
#ifndef CULLING_REPARTITION
#if ( defined(_IRIX_SOURCE) || defined(_SUNOS_SOURCE) || defined(_HPUX_SOURCE))
  CATMPRenderingFlags*      _MPRenderingFlags;
#endif
#endif



private:
  int _RefNbr; /** @win64 fbq : 64-bit structure packing **/

protected:
  // La weak reference associee a la rep.
  CATRepWeakRef * _WeakRef;

private:
  /** @nodoc */
  //CATRep (const CATRep &);
  /** @nodoc */
  //CATRep & operator = (const CATRep &);
  static CATVizSemanticLevel _semanticLevel;

};

inline CATGraphicAttributeSet  & CATRep::GetGraphicAttributeSet() 
{
  return (  _the_Visu_Attributs);
}

#ifndef CATIAV5R26
inline void CATRep::SetGraphicAttributeSet(const CATGraphicAttributeSet &the_attributs)
{
  _the_Visu_Attributs = the_attributs;
}
#endif

inline unsigned int CATRep::GetInheritanceMode()
{
  return _inheritanceMode ;
}

inline int CATRep::GetRefNbr(void) const
{
 return _RefNbr;
} 

inline int CATRep::IsASprite()
{
  return _isasprite;
}

inline void CATRep::SetAsSprite(int iIsASprite)
{
  _isasprite = iIsASprite;
}

inline int CATRep::IsIn3DBackground()
{
  return _isin3dbackground;
}

inline void CATRep::SetIn3DBackground(int iYesOrNo)
{
  _isin3dbackground = iYesOrNo;
}

inline HRESULT CATRep::GetGPIterator(CATGPIterator ** oIterator)
{
   if(!oIterator) return E_FAIL;
   (*oIterator) = new CATGPIterator(*this);
   return S_OK;
}

#ifdef CATIAV5R26
inline void CATRep::GetGraphicAttributeSet(CATGraphicAttributeSet& oAttributeSet) const
{
  oAttributeSet = _the_Visu_Attributs;
}
#endif
#endif // CATRep_H

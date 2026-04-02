#ifndef CATGraphicPrimitive_H
#define CATGraphicPrimitive_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//******************************************************************************
//  Inheritance:
//  ------------
//                CATGraphicPrimitive
//                  CATBaseUnknown (SYSTEM framework)
//******************************************************************************

#include "CATViz.h"
#include "CATBaseUnknown.h"
#include "list.h"
#include "CATMutex.h"
#include "CATSysAllocator.h"
#include "CATMappingOperator.h"
#include "CATIAV5Level.h"
#include "CATListPV.h"
#include "CATVizMacForMetaClass.h"

class CATRender;
class CATStreamer;
class CATMappingOperator;
class CATVizPrimitive;
class CATCacheOfDestroyedElements;

/**
 * @nodoc 
 * The data is allocated by the CATGraphicPrimitive and must be deleted by it.
 */
#define ALLOCATE         1

/**
 * @nodoc 
 * The data is not allocated by the CATGraphicPrimitive.
 */
#define DONT_ALLOCATE    0

/**
 * @nodoc 
 */
#define INVALID_STORAGEID      0x7fffffff  //max value for a 31 bits unsigned int 


/**
 * @nodoc
 * Flag to specify whether the tessellation of lines and polylines stand for real lines and polylines
 * or for tesselated curves.
 * @param LINE
 *    The tessellation stands for real lines or polylines.
 * @param CURVE
 *    The tessellation stands for curves.
 * @param INFINITE_LINE
 *    The tessellation stands for infinite lines.
 */
enum TessFlag { 
  LINE,
  CURVE,
  INFINITE_LINE
};

/**
 * Base class of Graphic Primitives. It contains the graphic datas that are to be shown on the
 * screen. We can either find 2d or 3d graphic data lying under this object.
 * You cannot delete a graphic primitive. You must use the 
 * CATGraphicPrimite::Destroy static method to delete a graphic primitive.
 * The differed destruction is activated between the culling and the 
 * drawing processing.
 * The underlying inheritance tree looks like that:
 * <br>
 * <pre>
 *      CATGraphicPrimitive <-- CAT3DBoundingGP <-- CAT3DFaceGP
 *                                              <-- CAT3DCylinderGP
 *                                              <-- ...
 *                          <-- CAT2DImagePixelGP
 *                          <-- CAT3DMarkerGP
 *</pre>
 * Objects that inherits from a CAT3DBoundingGP are the ones that may require
 * the services provided by a bounding box. This is only valid for 3d data.
 * Objects that have no graphic datas (in terms of triangles) directly
 * inherit from a CATGraphicPrimitive.
 */
class ExportedByCATViz CATGraphicPrimitive : public CATBaseUnknown
{
  /** @nodoc */
  CATDeclareClass;
  /** @nodoc */
  CATVizDeclareClass;

  /** @nodoc */
  friend class CATCacheOfDestroyedElements;

  public:
  /** @nodoc */
  void *operator new(size_t iSize,void *iAllocType=NULL,
      void *iAddr=NULL,int iReservedSize=0);

  /** @nodoc */
  void operator delete(void *iAddr);

#ifdef _WINDOWS_SOURCE
  /** @nodoc */
  void operator delete(void *iAddr,void *iAllocType,
      void *iRefAddr,int iReservedSize);
#endif

  /**
   * Default constructor
   */
  CATGraphicPrimitive (void);

  /**
   * @nodoc
   * Streaming
   */
  virtual void Stream(CATStreamer& oStr,int iSaveType=0);

  /**
   * @nodoc
   * Streaming
   */
  virtual void UnStream(CATStreamer& iStr);

  /**
   * @nodoc
   * Skips the unstreaming of a graphic primitive.
   * <br><b>Role:</b>: This method can be used when you do not want
   * to unstream a graphic primitive. It is used like this :<br>
   * CATGraphicPrimitive::Skip(str);
   * @param iStr
   *   The streamer used to unstream the graphic primitives.
   */
  static void Skip(CATStreamer & iStr);

  /**
   * Draws the graphic primitive.
   * @param iRender
   *    The render through which the graphic primitive is drawn.
   */
  virtual void Draw (CATRender &iRender) = 0;

  /**
   * @nodoc
   * Uses a Mapping operator to find the coordinates.
   */
  virtual void ComputeTextureCoordinates (const CATMappingOperator &op);

  /**
   * @nodoc
   * Overloading of the CATBaseUnknown::AddRef() method
   */
  virtual ULONG   __stdcall AddRef();

  /**
   * @nodoc
   * Overloading of the CATBaseUnknown::Release() method in order
   * to use CATGraphicPrimitive::Destroy method rather than the standard delete.
   */
  virtual ULONG   __stdcall Release() ;

  /**
   * @nodoc
   * Differed destruction.
   * Locks the differed destruction.
   */
  //static void Lock    (void);

  /**
   * @nodoc
   * Differed destruction
   * Unlocks and Destroys all memorized primitives.
   */
  //static void Unlock  (void);

  /**
   * Memorizes the primitive destruction or deletes it if the differed
   * destruction is not active.
   * @param iGPToDestroy
   *    Pointer on the Graphic Primitive to destroy.
   */
  static void Destroy (CATGraphicPrimitive * iGPToDestroy);

  /**
   * @nodoc
   * When CGMId is not 0, it is the CGM pesistent tag
   * of the Topological face associate with the GP.
   */
  inline unsigned int GetCGMId();

  /**
   * @nodoc
   * Do not use this method.
   * We provide internaly the right CGM tag.
   */
  inline void SetCGMId(unsigned int iId);


  /**
   * @nodoc
   * Return S_OK if the GP is decorated.
   * Gives you a copy of the GP's decoration. If you Get S_OK and oDecoration is NULL
   * it means that the decoration is of type UNKNOWN.
   * Use delete[] to clean the buffer iDecoration
   */
  HRESULT GetDecoration(char*& oDecoration, int& oSize);

  /**
   * @nodoc
   * return 1 if there is a decoration
   * return 0 if there is no decoration
   */
  int IsDecoration(void);

  /**
   * @nodoc.
   * You can store additionnal informations on the GP.
   * You just have to provide an array of byte and its size.
   */
  void SetDecoration(const char* iDecoration, int iSize);

  /**
   * @nodoc
   */
  static const char *GetUnknownDecoration();

  /**
   * @nodoc.
   */
  virtual void Empty();

  /**
   * @nodoc
   */
  virtual int DetailCulling(CATRender *render);

  /**
   * @nodoc
   */
  virtual void ResetDLs(); //SVQ_JUT

  /**
   * @nodoc
   */
  virtual CATVizPrimitive * GetVizPrimitive(int &oAllocateMode);//SVQ_JUT

  /**
   * @nodoc
   */
  virtual void SetVizPrimitive(CATVizPrimitive * iPrimitive, int iAllocateMode); //SVQ_JUT

  protected :

  // Differed destruction parameters:
  // --------------------------------

  virtual ~CATGraphicPrimitive (void);
  static void Reset  (void); 

  static CATMutex             _mutexGP;
  static const char           _gpUnknownDecoration;


  private :

  // Semantic decoration
  // -------------------
  unsigned int _CGMId;
  char* _pDMUdecoration;
};

inline unsigned int CATGraphicPrimitive::GetCGMId() {return _CGMId;}

inline void CATGraphicPrimitive::SetCGMId(unsigned int id) {_CGMId = id;}

#endif

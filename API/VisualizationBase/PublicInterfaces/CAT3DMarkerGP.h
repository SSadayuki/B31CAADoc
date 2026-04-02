#ifndef CAT3DMarkerGP_H
#define CAT3DMarkerGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

//------------------------------------------------------------------------------
// Abstract: Graphic 3D marker. 
//------------------------------------------------------------------------------
// Inheritance: CAT3DMarker
//                 CATGraphicPrimitive
//                    CATBaseUnknown (SYSTEM framework)
//------------------------------------------------------------------------------

#include "CATViz.h"

#include "CATGraphicPrimitive.h"
#include "CATVizMacForMetaClass.h"

class CATMathPointf;
class CATStreamer;
#include "CATSymbolType.h"

/**
 * Class to create the graphic primitive of 3D markers.
 * <b>Role</b>: This graphic primitive is a graphic 3D marker to point to one or
 * several specific points in the space. A 3D marker size is constant, it does not depend
 * on the zoom.
 */
class ExportedByCATViz CAT3DMarkerGP : public CATGraphicPrimitive
{ 
 friend class CATMarshallable3DMarkerGP;
 CATDeclareClass;
 CATVizDeclareClass;
 
 public :

  /**
   * Default constructor.
   */
   CAT3DMarkerGP ();

  /**
   * Constructs 3D markers from a list of 3D points, and the type of symbol wanted to be used.
   * @param iPoints
   *   Array containing the coordinates of the points to mark : XYZXYZXYZ... Its size is equal
   *   to three times the number of points.
   * @param iNbPoints
   *   The number of points to mark, which coordinates are stored in the <tt>iPoints</tt> array.
   *   If no <tt>iNbPoints</tt> is specified, the number of points is assumed to be 1.
   * @param iSymbol
   *   The symbol wanted to be used to mark the points.
   *   The default value is <tt>CROSS</tt>.
   * @param iAlloc
   *    Flag used to specify whether points must be duplicated or not.
   *    <br><b>Legal values</b>:
   *    <dl>
   *      <dt>ALLOCATE</dt>
   *        <dd>All data are duplicated into the graphic primitive</dd>
   *      <dt>DONT_ALLOCATE</dt>
   *        <dd>The graphic primitive has a pointer to the data given as parameter
   *        Warning : If the number of points is equal to 1, the points are duplicated
   *		anyway (Memory issue). The input data must still be destroyed by the caller.</dd>
   *    </dl>
   *    The default value is <tt>ALLOCATE</tt>.
   */
   CAT3DMarkerGP (const float iPoints[], const int iNbPoints=1, CATSymbolType iSymbol = CROSS, const int iAlloc=ALLOCATE);
   

   /**
    *sets the symbol used to mark the points to a new value.
    *@param iSymbol
	  * The new symbol you wish to use.
    */

   void SetSymbolType (CATSymbolType iSymbol);
  /**
   * @nodoc
   */
   virtual void Stream(CATStreamer& oStr,int iSaveType=0);

  /**
   * @nodoc
   */
   virtual void UnStream(CATStreamer& iStr);


  /**
   * Retrieves marked points coordinates and the symbol type used
   * to mark them.
   * This method must be called this way:
   * <pre>
   * float * points;
   * int nbPoints;
   * SymbolType symbol;
   *
   * Get(&points, &NbPoints, &symbol);
   * </pre>
   * @param oPoints
   *   Retrieves an array containing marked points coordinates: XYZXYZXYZ...
   *   Its size is equal to three times the number of marked points.
   * @param oNbPoints
   *   Retrieves the number of points marked by this 3D marker.
   * @param oSymbol
   *   Retrieves the symbol used to mark the points.
   */
   inline void Get (float **oPoints, int *oNbPoint, CATSymbolType * oSymbol) const;

  /**
   * Draws the 3D marker.
   * @param iRender
   *   The render through which the 3D marker is drawn.
   * @param iViewpoint
   *   The viewpoint through which the 3D marker is seen.
   * @param iViewport
   *   The viewport in which the 3D marker is located.
   */
   virtual void Draw (CATRender & iRender);
    
  /**
   * @nodoc
   */
  virtual int DetailCulling(CATRender *render);
  
  /**
   * @nodoc
   */
   virtual CATVizPrimitive * GetVizPrimitive(int &oAllocateMode);

  /**
   * @nodoc
   */
   virtual void SetVizPrimitive(CATVizPrimitive * iPrimitive, int iAllocateMode);

//------------------------------------------------------------------------------

 protected :

    virtual ~CAT3DMarkerGP();

//------------------------------------------------------------------------------

 private :

   //CATSymbolType _symbol;
   //float      *_points;
   //int        _nb_points;
   //int        _alloc;
   
   unsigned short _symbol;
   unsigned char  _type;

   union 
   {
      struct
      {
         float  *_points;
         int     _nb_points;
         int     _alloc;
      } _multiple;
      struct
      {
         float _coord[3];
      } _single;
   } _data;
};

/**
 * @nodoc
 */
#define MARKER_SINGLE 0
/**
 * @nodoc
 */
#define MARKER_MULTIPLE 1

inline void CAT3DMarkerGP::Get (float **points, int *nb_points, CATSymbolType *symbol) const
{
   *symbol = (CATSymbolType) _symbol;
   if (_type == MARKER_MULTIPLE)
   {
      *points    = _data._multiple._points;
      *nb_points = _data._multiple._nb_points;
   }
   else
   {
      *points = (float*) &(_data._single._coord[0]);
      *nb_points = 1;
   }
}

#endif

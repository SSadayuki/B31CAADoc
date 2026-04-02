#ifndef CATISONotification_H_
#define CATISONotification_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CD0WIN.h"
#include "CATNotification.h"
#include "CATViewer.h"

/** 
 * Class representing a notification sent when a 3Dviewer is added 
 * into an Interactive Set Of Objects.
 * @see CATISO, CATViewer,CATISORemove3DViewer,CATISOAdd2DViewer,CATISORemove2DViewer
 */
class ExportedByCD0WIN CATISOAdd3DViewer : public CATNotification
{
 
  CATDeclareClass;

  public:
   /** @nodoc */ 
   
   CATISOAdd3DViewer ( CATViewer  *iViewer);
   virtual ~CATISOAdd3DViewer();
   /** The viewer added in the Interactive Set Of Objects.*/
  CATViewer  * _Viewer;
};

/** 
 * Class representing a notification sent when a 3Dviewer is removed from 
 * an Interactive Set Of Objects.
 * @see CATISO,CATViewer,CATISOAdd3DViewer,CATISOAdd2DViewer,CATISORemove2DViewer
 */
class ExportedByCD0WIN CATISORemove3DViewer : public CATNotification
{
  
  CATDeclareClass;

  public:
  /** @nodoc */
  CATISORemove3DViewer ( CATViewer  *iViewer);
   virtual ~CATISORemove3DViewer();
   /** the viewer removed from the Interactive Set Of Objects.*/
  CATViewer  * _Viewer;
};

/** 
 * Class representing a notification sent when a 2Dviewer is added 
 * into an Interactive Set Of Objects.
 * @see CATISO,CATViewer,CATISORemove2DViewer,CATISOAdd3DViewer,CATISORemove2DViewer
 */
class ExportedByCD0WIN CATISOAdd2DViewer : public CATNotification
{
  
  CATDeclareClass;

  public:
  /** @nodoc */

  CATISOAdd2DViewer ( CATViewer  *iViewer);
   virtual ~CATISOAdd2DViewer();
   /** the viewer added in the Interactive Set Of Objects.*/
  CATViewer  * _Viewer;
};

/** 
 * Class representing a notification sent when a 2Dviewer is removed from 
 * an Interactive Set Of Objects.
 * @see CATISO,CATViewer,CATISOAdd2DViewer,CATISOAdd3DViewer,CATISORemove2DViewer
 */
class ExportedByCD0WIN CATISORemove2DViewer : public CATNotification
{
  
  CATDeclareClass;

  public:
  /** @nodoc */
  CATISORemove2DViewer ( CATViewer  *iViewer);
   virtual ~CATISORemove2DViewer();
  /** the viewer removed from the Interactive Set Of Objects.*/
   CATViewer  * _Viewer;
};
#endif

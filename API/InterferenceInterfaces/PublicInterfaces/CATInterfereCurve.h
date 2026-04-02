#ifndef CATInterfereCurve_H
#define CATInterfereCurve_H
//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework CAAInterference
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2005 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */


#include "CATInterference.h"

#include "IUnknown.h"


/**
 * Class to describe curve interference.<br>
 * <b>Role</b>: Class to describe the curve interference.<br>
 * To use with CATInterfereModel
 *
 */
class ExportedByCATInterferenceInterfaces CATInterfereCurve
{
  public:
        
  //-----------------------------------------------------------------------------------------
  /**
   * GetCurves - Get segments coordinates.
   *
   * @param opResPointsSegment
   *    Array made of vertices of segment coordinates: XYZXYZXYZ...
   *
   * @param opNbPointsSegment
   *    Array made of number of segment in each polyline <br>
   *    its size is [oNbPolylinesSegment]
   *
   * @param oNbPolylinesSegment
   *    Number of polyline in the curve <br>
   *
   *    2 case :  <br> 
   *
   *    1) if [oNbPolylinesSegment] = -1 then there is NO polyline and NO sort in the curve as : <br>
   *
   *    <pre>
   *
   *                 --------------------       
   *                | *opResPointsSegment|   } array of size [opNbPointsSegment[0]] = 2 * number of segment
   *                 --------------------
   *                |       x 0          |   }
   *                |       y 1          |   } vertices 0 of segment 0
   *                |       y 2          |   }
   *                |       x 3          |   }
   *                |       y 4          |   } vertices 1 of segment 0
   *                |       z 5          |   }
   *                |        .           |
   *                |        .           |
   *                |        .           |
   *                |       x (6*i)      |   }
   *                |       y (6*i+1)    |   } vertices 0 of segment i
   *                |       y (6*i+2)    |   }
   *                |       x (6*i+3)    |   }
   *                |       y (6*i+4)    |   } vertices 1 of segment i
   *                |       z (6*i+5)    |   }
   *                |        .           |
   *                |        .           |
   *                |        .           |
   *                 --------------------
   *
   *   </pre>
   *
   *    2) if [oNbPolylinesSegment] = n then there is polyline and sort in the curve as : <br>
   *
   *    <pre>
   *
   *                 --------------------       
   *                | *opResPointsSegment|   } array of size [opNbPointsSegment[0]+...+opNbPointsSegment[oNbPolylinesSegment-1]]
   *                 --------------------
   *                |       x 0          |   }
   *                |       y 1          |   } vertices 0 of segment 0                              }
   *                |       y 2          |   }                                                      }   
   *                |       x 3          |   }                                                      }
   *                |       y 4          |   } vertices 1 of segment 0 and vertice 0 of segment 1   }
   *                |       z 5          |   }                                                      }
   *                |       x.6          |   }                                                      } polyline 0 of size [opNbPointsSegment[0]]
   *                |       y.7          |   } vertices 1 of segment 1 and ...                      }
   *                |       z.8          |   }                                                      }
   *                |        .           |                                                          }
   *                |        .           |                                                          }
   *                |       x (6*i)      |   }                                                      }
   *                |       y (6*i+1)    |   } vertices 0 of segment i and vertice 1 of segment i-1 }
   *                |       y (6*i+2)    |   }                                                      }
   *                |       x (6*i+3)    |   }                                                      }
   *                |       y (6*i+4)    |   } vertices 1 of segment i and ...                      }
   *                |       z (6*i+5)    |   }
   *                |        .           |
   *                |        .           |                                                          }
   *                |        .           |                                                          } polyline k of size [opNbPointsSegment[k]] with 0<=k<=oNbPolylinesSegment-1
   *                 --------------------
   *
   *   </pre>
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------


      virtual 
      HRESULT GetCurves (const double ** opResPointsSegment, 
                         const int    ** opNbPointsSegment, 
                         int           *  oNbPolylinesSegment)   const = 0;

  //-----------------------------------------------------------------------------------------
  /**
   * GetPoints - Get points coordinates.
   *
   * @param opResPointsPoints
   *    Array made of points coordinates: XYZ...<br>
   *    its size is [oNbPointsPoints]<br>
   *
   * @param oNbPointsPoints
   *    Number of points
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual 
      HRESULT GetPoints (const double ** opResPointsPoints, 
                         int           * oNbPointsPoints)        const = 0;


  //-----------------------------------------------------------------------------------------
  /**
   * GetRadius - Get radius of Bounding element of the curve.
   *
   * @param oRadius
   *    radius of Bounding element of the curve
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      HRESULT GetRadius(float * oRadius)   const = 0;


  //-----------------------------------------------------------------------------------------
  /**
   * GetCenter - Get center of Bounding element of the curve.
   *
   * @param oCenter
   *    center of Bounding element of the curve
   *
   * @return
   *        HRESULT
   *
   */
  //-----------------------------------------------------------------------------------------
      virtual
      HRESULT GetCenter(float oCenter[3])  const = 0;



      virtual ~CATInterfereCurve();

};

//------------------------------------------------------------------------------------


#endif // CATInterfereCurve_H



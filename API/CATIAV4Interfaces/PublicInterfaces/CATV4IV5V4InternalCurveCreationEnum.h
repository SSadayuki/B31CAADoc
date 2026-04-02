#ifndef CATV4IV5V4InternalCurveCreationEnum_H
#define CATV4IV5V4InternalCurveCreationEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
// COPYRIGHT DASSAULT SYSTEMES 2003
//--------------------------------------------------------------------------
// CATV4IV5V4ErrorFeatureCreationEnum Enum
//--------------------------------------------------------------------------

    /**
     * The internal curves' creation mode during Save As Model.
     * @param AllCurvesAreCreated
     *   All V4 curves are created in the model.
     * @param OnlyConicsAreCreated
     *   Only internal conics are created.
	 * @param NoInternalCurveIsCreated
     *   None of the curves associated to internal face boundaries is created. 
     * @see CATIV4IV4WritingSettingAtt
     */
enum CATV4IV5V4InternalCurveCreationEnum{AllCurvesAreCreated, OnlyConicsAreCreated, NoInternalCurveIsCreated };
#endif

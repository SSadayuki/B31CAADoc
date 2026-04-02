#ifndef CAT_LEVEL_OF_DETAIL_H
#define CAT_LEVEL_OF_DETAIL_H

/* COPYRIGHT DASSAULT SYSTEMES 1999 */

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef NULL
#define NULL 0
#endif

/** 
 * Structure used in Level of Detail of graphic representation.
 * <b>Role</b>: This Structur is used in the @href MakeLods and
 * @href ClearLods global functions.
 */
typedef struct lodData
{
  float *vertex;		 /* Point array.                              */
  int nb_vertex;		 /* Number of points (3 coordinates/vertex).  */
  float *normal;		 /* Normal array.                             */
  int nb_normal;		 /* Number of normals (3 coordinates/normal). */
  float *texture;    /* Texture array.                            */
  int nb_tri;			 /* Number of defined triangles.              */
  int *tri;			 /* Indexes defining triangles.               */
  int nb_strip;			 /* The number of defined strips.             */
  int *strip_size;		 /* The size of each strip.                   */
  int *strip_index;		 /* Indexes of the points defining strips.    */
  int nb_fan;			 /* The number of defined fans.               */
  int *fan_size;		 /* The size of each fan.                     */
  int *fan_index;		 /* Indexes of the points defining fans.      */

#ifdef __cplusplus
  lodData()
  {
     vertex = NULL;
     nb_vertex = 0;
     normal = NULL;;
     nb_normal = 0;
     texture = NULL;
     nb_tri = 0;
     tri = NULL;
     nb_strip = 0;
     strip_size = NULL;
     strip_index = NULL;
     nb_fan = 0;
     fan_size = NULL;
     fan_index = NULL;
  }
#endif
} LodData;


#include "CATViz.h"

/** Function to provide mesh simplification.
 * <br><b>Role</b>: This single function provides mesh simplification mechanism for both)
 *       surfaces and solids. The number of level of details and the simplifica-
 *       tion rate for each level are to be defined by the user.
 *         - Solids  : The global solid geometry will be modified and the 
 *                     topology won't be left intact unless the simplification
 *                     ratios are extremely low.
 *         - Surfaces: The surface edges are left unchanged at low ratios.
 *                     Only the inner surface parts will be modified. At higher
 *                     levels, boundary edges are being modified.
 *       The number of returned lods may be different than the wanted one. The
 *       simplification ratios can be different from the given values.
 *       This function returns at least one level of detail for each input part,
 *       when working normally. Some parts are too small to be simplified. In
 *       this case, no level of details are ever computed.
 *       The function returns sags defining the precision rate of each level of
 *       detail. The user has to give the sag of the initial geometry to be
 *       simplified.
 *
 *  Input parameters are made of CAT3DFaceGP parameters, converted into a 
 *  LodData structure:
 *  
 * 
 * @param input
 *  Pointer to the LodData structure.
 * @param number_of_lods
 *  The number of wanted LOD's (will be used as output parameter too).        
 * @param lod_step       
 *  The simplification ratio for each lod (defined by
 *  a simplification percentage relative to the number
 *  of triangles).
 * @param initial_sag  
 *  The precision of the given original geometry.
 *  The simplification process will compute
 *  an approximative sag from the tesselation when
 *  the <sag_approx> value is set to 1.
 * @param sag_approx     
 * <br><b>Legal values</b>:
 * <ol>
 * <li> 0: Automatical sag computation is disabled.</li>
 * <li> 1: Automatical sag computation is enabled.</li>
 * </ol>
 *
 * Output parameters are the following:
 * @param number_of_lods
 *  The real number of computed lods.
 * @param sag 
 *  Sag's of the different levels of detail.
 * @param output      
 *  Array of LodData of <number_of_lods> size.
 *  <*output> is the adress to a pointer list to the
 *  LodData, (*output)[i] is the adress of the i-th
 *  lod information LodData.
 * @param initial_sag 
 *  When the <sag_approx> is turned to 1, the value
 *  of it is updated with the automatically computed sag.
 *
 * @return
 * <br><b>Legal values</b>:
 * <tt>1 in case of success</tt>
 * <tt>0 for failure</tt>
 *
 */
ExportedByCATViz int MakeLods (LodData *input,
	      int *number_of_lods,
	      double *lod_step,
	      double *initial_sag,
	      int sag_approx,
	      double **sag,
	      LodData ***output);

/** Function to free useless memory.
 * <br><b>Role</b>: This function is to be used after a call to MakeLods, in order to free
 *  useless memory in the LodData <***output> and <**sag> arguments of 
 *  MakeLods.
 *
 * @param ldata
 *  Array of LodData parameters to be cleared (same format as
 *  MakeLods).
 * @param sdata
 *  Array of sags allocated by the previous routine.
 * @param  size
 *  Number of LodData to be cleared.
 *
 */
ExportedByCATViz void ClearLods (LodData ***ldata,double **sdata,int size);

/**
 * @nodoc
 */
ExportedByCATViz int MakeStripAndFan (LodData *input, LodData **output);

/**
 * @nodoc
 */
ExportedByCATViz void ClearStripAndFanStructure (LodData **ldata);


#endif

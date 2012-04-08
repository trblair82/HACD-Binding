/* 
 * File:   HACD_JNAwrapper.h
 * Author: trblair
 *
 * Created on April 7, 2012, 7:17 AM
 */

#ifndef HACD_JNAWRAPPER_H
#define	HACD_JNAWRAPPER_H

struct JNACluster {
    float* floats;
    int size;
    

} ;       

extern "C" JNACluster* JNAConvexDecomposition(float* inputConcave,int num_triangles, int *pcount);

extern "C" void FreeJNAConvexDecomposition(struct JNACluster* clusters);

extern "C" void JNASetCompacityWeight(float weight);

extern "C" void JNASetVolumeWeight(float weight);

extern "C" void JNASetNClusters(int num_clusters);

extern "C" void JNASetNVerticesPerCH(int num_vertices);

extern "C" void JNASetConcavity(int concavity);

extern "C" void JNASetAddExtraDistPoints(bool addDistPoints);

extern "C" void JNASetAddNeighboursDistPoints(bool addNeighboursDistPoints);

extern "C" void JNASetAddFacesPoints(bool addFacePoints);

#endif	/* HACD_JNAWRAPPER_H */


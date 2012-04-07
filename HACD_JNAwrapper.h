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

#endif	/* HACD_JNAWRAPPER_H */


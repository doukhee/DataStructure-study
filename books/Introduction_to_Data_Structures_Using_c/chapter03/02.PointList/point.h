#ifndef __POINT_H__
#define __POINT_H__

/** Point structure setting */
typedef struct _point{
    int xpos;
    int ypos;
} Point;

/** setting point position */
void SetPointPos(Point *ppos, int xpos, int ypos);
/** show point position */
void ShowPointPos(Point *ppos);
/** compare point position */
int PointCmp(Point *ppos, Point *ppos2);

#endif
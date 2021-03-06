#ifndef MARKER_H
#define MARKER_H

#define MARKER_SIZE 4

#include <QString>
#include <QPainter>

struct Sequence;

struct Marker {
    long frame;
    QString name;
};

void draw_marker(QPainter& p, int x, int y, int bottom, bool selected, bool flipped);

void set_marker_internal(Sequence* seq, const QVector<int>& clips);
void set_marker_internal(Sequence* seq);

#endif // MARKER_H

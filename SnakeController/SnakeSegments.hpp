#pragma once

#include <list>
#include <memory>
#include <sstream>

class Segments{
public:
    Segments(std::istringstream);
    bool isSegmentAtPosition(int x, int y) const;
    // Segment calculateNewHead() const;
    // void updateSegmentsIfSuccessfullMove(Segment const& newHead);
    // void addHeadSegment(Segment const& newHead);
    // void removeTailSegmentIfNotScored(Segment const& newHead);
    // void removeTailSegment();

    void pushB(Segments);
    

private:
    int x;
    int y;
    std::list<Segments> m_segments;

    
};
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SclhMetrics : NSObject
{
    NSMutableArray *m_tracksArray;
    struct ScViewState *m_viewState;
    struct CGRect m_viewBounds;
    struct CGRect m_emptyRem;
    double m_deltaY;
    int m_deltaY_scoreTrackIndex;
    int m_deltaY_staffIndex;
    int m_deltaY_globalVoice;
    BOOL m_moveOne2;
}

- (void)copyFromMetrics:(id)arg1;
- (BOOL)isChangeFromMetrics:(id)arg1;
- (id)description;
- (void)resetCursorRects_view:(id)arg1;
- (BOOL)hitTestForHeaderPos:(struct CGPoint)arg1 sclhPartData:(struct SclhPartData *)arg2;
- (void)moveDeltaY:(double)arg1 sclhPartData:(struct SclhPartData *)arg2 moveOne:(BOOL)arg3;
- (void)drawScoreTracks:(struct ScViewState *)arg1;
- (int)instForScoreTrackIndex:(int)arg1;
- (id)trackMetricsForScoreTrackIndex:(int)arg1;
- (id)staffMetricsForAbsNumber2:(int)arg1 scoreTrackIndex:(int)arg2;
- (struct CGRect)emptyRem;
- (void)setRemRect:(struct CGRect)arg1;
- (void)resetForViewState:(struct ScViewState *)arg1 viewBounds:(struct CGRect)arg2;
- (void)dealloc;
- (id)initLinHeaderMetrics;

@end


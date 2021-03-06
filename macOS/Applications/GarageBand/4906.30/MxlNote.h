//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MxlDuration.h"

@class NSMutableArray, NSString;

@interface MxlNote : MxlDuration
{
    int slurState;
    long long slurIndex;
    BOOL isGraceNote;
    unsigned char m_leftbeams;
    unsigned char m_rightbeams;
    BOOL m_isStemUp0;
    BOOL m_isStemHidden0;
    int ornamentType;
    int arpeggiateType;
    NSMutableArray *mxlAttachments;
    NSMutableArray *mxlHeads;
    NSString *mxlText;
}

+ (long long)slurNumberForIndex:(long long)arg1 isStop:(BOOL)arg2;
+ (void)resetSlurNumbers;
@property BOOL isGraceNote; // @synthesize isGraceNote;
@property long long slurIndex; // @synthesize slurIndex;
@property int slurState; // @synthesize slurState;
- (id)description;
- (id)descriptionString;
- (long long)mean_yPos;
- (void)addNoteHead:(id)arg1;
- (id)pitchString;
- (void)xmlDebugMeasureElem:(id)arg1 elemIndex:(long long)arg2 viewState:(struct ScViewState *)arg3;
- (long long)xmlCreateDurationElem:(id)arg1 voiceNumber:(long long)arg2 numPercLines:(long long)arg3 currentDivision:(long long)arg4 dbgMeasureID:(struct MxlMeasureID *)arg5;
- (void)tiePitchToNext:(id)arg1;
- (int)mxlElemType;
- (struct ScChordNote *)chordNote;
- (void)dealloc;
- (id)initWithStaffNumber:(long long)arg1 chordNote:(struct ScChordNote *)arg2;

@end


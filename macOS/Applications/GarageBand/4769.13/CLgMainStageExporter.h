//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CLgMainStageExporter : NSObject
{
    struct CSong *pSong;
}

+ (id)createFileChecksForTrack:(const struct CTrack *)arg1 inSong:(struct CSong *)arg2 inSeqID:(struct CMSeq *)arg3;
+ (BOOL)exportSelectedTracksInSong:(struct CSong *)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (BOOL)exportChannelInSong:(struct CSong *)arg1 gindex:(int)arg2 toURL:(id)arg3 error:(id *)arg4;
- (id)createFileWrapperForTracks:(list_87e0eb21)arg1 inSeqID:(struct CMSeq *)arg2 finishedErasePhase:(char *)arg3;
- (id)createFileWrapperForChannel:(int)arg1 finishedErasePhase:(char *)arg2;
- (id)createFileChecksForTrack:(const struct CTrack *)arg1 inSeqID:(const struct CMSeq *)arg2;
- (void)addFileCheckPathsForChannel:(int)arg1 toSet:(id)arg2 recursivelyVisited:(id)arg3;
- (id)initWithSong:(struct CSong *)arg1;

@end


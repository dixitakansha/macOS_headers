//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class MGMovieThumbnailExtractor, NSMutableArray, NSMutableDictionary, NSSet, QTMovie;

@interface MGMovieThumbnailExtractionSession : NSObject
{
    QTMovie *_movie;
    void *_dispatchQueue;
    MGMovieThumbnailExtractor *_extractor;
    void *_extractorTimeoutTimer;
    NSSet *_availableThumbnailTimeRanges;
    NSMutableArray *_pendingRequestsOutsideOfAvailableTimeRanges;
    NSMutableArray *_extractionCancelationTokens;
    NSMutableDictionary *_thumbnailImageCache;
}

+ (id)sessionWithMovie:(id)arg1;
- (void)performPendingExtractionRequest:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelAllExtractions;
- (void)extractThumbnailWithSize:(struct CGSize)arg1 atTime:(CDStruct_900afa40)arg2 returningToBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithMovie:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HelpData/DDMObject.h>

@class NSString, NSURL;

@interface DDMMisc : DDMObject
{
    NSURL *_harrierBaseURL;
    NSURL *_remoteSearchIndex;
    NSURL *_remoteExactMatch;
    NSString *_buildId;
}

@property(readonly) NSString *buildId; // @synthesize buildId=_buildId;
@property(readonly) NSURL *remoteExactMatch; // @synthesize remoteExactMatch=_remoteExactMatch;
@property(readonly) NSURL *remoteSearchIndex; // @synthesize remoteSearchIndex=_remoteSearchIndex;
@property(readonly) NSURL *harrierBaseURL; // @synthesize harrierBaseURL=_harrierBaseURL;
- (void).cxx_destruct;
- (id)description;

@end


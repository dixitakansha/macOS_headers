//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface TSUDownloadManagerDownloadResultInfo : NSObject
{
    BOOL _success;
    NSError *_error;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) BOOL success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSuccess:(BOOL)arg1 error:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@class NSMachOTaskImage;

@interface NSMachODyldSecrets : NSObject
{
    unsigned int _task;
    NSMachOTaskImage *_taskImage;
}

- (void)findMachHeadersForTask;
- (id)initWithTask:(unsigned int)arg1 image:(id)arg2 checkSwapped:(BOOL)arg3;

@end


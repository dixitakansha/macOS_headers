//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CoreDAVTaskDelegate-Protocol.h>

@class CoreDAVMkcolTask, NSArray, NSError;

@protocol CoreDAVMkcolTaskDelegate <CoreDAVTaskDelegate>

@optional
- (void)mkcolTask:(CoreDAVMkcolTask *)arg1 parsedPropStats:(NSArray *)arg2 error:(NSError *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SlingShotLightSocket.h>

@interface SlingShotLightCFSocket : SlingShotLightSocket
{
    struct __CFSocket *runLoopSocket;
    BOOL connectionThread;
}

- (int)fileDescriptor;
- (void)disconnect;
- (void)connect;
- (void)connectionThread;
- (BOOL)unScheduleInRunLoop;
- (void)scheduleInRunLoop;
- (id)initWithFileDescriptor:(int)arg1 useSSL:(BOOL)arg2;

@end


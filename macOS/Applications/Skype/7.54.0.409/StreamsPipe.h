//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSString, NSThread;
@protocol StreamsPipeObserver;

@interface StreamsPipe : NSObject <NSStreamDelegate>
{
    struct IHttpReadStream *m_stream;
    NSInputStream *m_inputStream;
    char *m_pipeBuffer;
    NSOutputStream *m_outputStream;
    id <StreamsPipeObserver> m_observer;
    BOOL m_finished;
    NSThread *m_thread;
    unsigned long long m_bytesWritten;
    unsigned long long m_bytesRead;
}

@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=m_inputStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)onStreamHasSpaceAvailable;
- (void)onError:(unsigned long long)arg1;
- (void)setObserver:(id)arg1;
- (void)dealloc;
- (id)initWithStream:(struct IHttpReadStream *)arg1 observer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


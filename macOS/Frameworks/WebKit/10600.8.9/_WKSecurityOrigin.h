//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _WKSecurityOrigin : NSObject
{
    struct RefPtr<WebCore::SecurityOrigin> _origin;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned short port;
@property(readonly, copy, nonatomic) NSString *host;
@property(readonly, copy, nonatomic) NSString *protocol;
-     // Error parsing type: @24@0:8r^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}16, name: _initWithSecurityOrigin:

@end


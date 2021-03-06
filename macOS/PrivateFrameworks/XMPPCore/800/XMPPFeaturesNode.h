//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XMPPCore/XMPPNode.h>

@class XMPPBindNode, XMPPSASLNode, XMPPTLSNode;

@interface XMPPFeaturesNode : XMPPNode
{
    XMPPTLSNode *_tlsNode;
    XMPPSASLNode *_saslNode;
    XMPPBindNode *_bindNode;
    unsigned int _supportsNonSASLAuth:1;
    unsigned int _requiresSession:1;
}

- (BOOL)requiresSession;
- (BOOL)supportsNonSASLAuth;
- (id)bindNode;
- (id)tlsNode;
- (id)saslNode;
- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (BOOL)shouldNotifyDelegate;
- (void)dealloc;

@end


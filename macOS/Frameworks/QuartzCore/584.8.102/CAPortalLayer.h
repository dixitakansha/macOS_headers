//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAPortalLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
@property BOOL matchesTransform;
@property BOOL matchesPosition;
@property BOOL matchesOpacity;
@property BOOL hidesSourceLayer;
@property unsigned int sourceContextId;
@property unsigned long long sourceLayerRenderId;
@property __weak CALayer *sourceLayer;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)didChangeValueForKey:(id)arg1;

@end


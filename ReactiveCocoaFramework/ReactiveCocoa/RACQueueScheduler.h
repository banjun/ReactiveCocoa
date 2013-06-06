//
//  RACQueueScheduler.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 11/30/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <ReactiveCocoa/RACScheduler.h>

// A scheduler which asynchronously enqueues all its work to a private Grand
// Central Dispatch queue.
@interface RACQueueScheduler : RACScheduler

// The queue on which blocks are enqueued.
@property (nonatomic, readonly) dispatch_queue_t queue;

// Initializes the receiver with the name of the scheduler and the queue which
// the scheduler should use.
//
// queue - The queue which the scheduler should use. Cannot be NULL.
//
// Returns the initialized object.
- (id)initWithQueue:(dispatch_queue_t)queue;

@end
